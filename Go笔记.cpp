package main	
		//package �����ļ������ĸ���  main: ��ں��� û�з���ֵ ���������һ����ִ���ļ� 
import "fmt"    ������� 
		//������ֻ�ܷű�ʶ��(���� ���� ���� ����)������  ÿ����䶼������"�ؼ���"��ͷ 

func main(){  	 //��ں��� 
## ��������  
	��ʼֵΪ��  ��ȫ�ֱ�������֮�����ʹ�� 
	var A string       
	var s1="hello"  //�����Ƶ�
	var s2 int32=1
	var s3=int8(2)     //ǿ��ת��
	s4:=12     //ʡ��var�ؼ���  ֻ���ں�����ʹ�� 
	s5:=int8(2)

	//��������
	var(
		A string
		B int
		C bool
	)  
//��������ʽ    
	�Ƽ�ʹ��С�շ�
	var studentName string //С�շ� 
	var StudentName string //���շ� 
	var student_name string//�»��� 
//���峣��  
	����֮�����޸� ����ı� 
	const pi=3.1415926
	const (
		s1=100
		s2    //Ĭ�Ϻ���һ��ֵһ�� 
		s3
	) 
    iota : ������ //��const����ʱ����Ϊ�� ÿ����һ�г��������ͼ���һ�� ��һ 
	const(
		b1=iota  //0
		b2       //1
		_        //2
		b3       //3
	) 
	//����������
	const(
		_ =iota        //iota=0
		KB=1<<(10*iota)//iota=1 ������1����10*1λ 2^10 10000000000 1024 B 
		MB=1<<(10*iota)//iota=2 ������1����10*2λ 2^20   1024*1024 
		GB=1<<(10*iota)
		TB=1<<(10*iota)
	) 
## ��������� 
	//������ 
	fmt.Print(A) ֱ�����Ҫ��ӡ������ 
	fmt.Printf("name:%s\n",A)  %s:ռλ�� �ַ�������  \n:���з� 
    fmt.Println(a) ĩβ���һ�����з� 
	//������� 
	fmt.Scan(&a,&b)  //��������ʱ�Կո���Ϊ�ָ���  
	fmt.Scanf("%d",&a) 
	fmt.Scanln(&a)   
## ������������
//ռλ��:
	fmt.Printf("%T\n",A)	 
	%T ���������� 
	%v Ĭ������ֵ�����ܣ�%#v ��ע����������
	%b ������  %dʮ����  %o�˽���  %xʮ������ 
	%f ������  %9.2f  
	%c �ַ� ������Ӧ��unicode��ֵ�� 
	%s �ַ���
	%q ��/˫�������������ַ�/�ַ�������ֵ����Ҫʱ���ð�ȫ��ת���ʾ
	%p �ڴ��ַ��ָ�룩  & ��ȡ(����)��ַ 
	%t ����ֵ 
	%U Unicode��ʽ:U+1234 �ȼ��� U+%04X 
	%% �ٷֺ�
		 
//����      int��uint��32λ����ϵͳ�Ͼ���int32��uint32 ��64λ����ϵͳ�Ͼ���int64��uint64
	int //�з������� 
		int8    //��λ�� -128��127�� 
		int16
		int32 //rune 
		int64
	uint//�޷������� 
		uint8   //��λ��0��255��
		uint16
	uintptr     //�޷������� ���ָ�� 
�˽��ƺ�ʮ������  
	A:=10101    //ʮ���� 
	A:=0777     //�˽��� 
	A:=0x12345  //ʮ������  
	fmt.Printf("%d%b%o%x",A) //%d ʮ���� %b ������ %o �˽��� %x ʮ������   
//������С�� 
	float32	float64    //������ȫ��ͬ������ֵ  ����ֱ���໥��ֵ 
	math.MaxFloat32	  math.MaxFloat64  //���ֵ
	f1:=1.23456 // Ĭ��Ϊfloat64 
	f2:=float32(1.23456) 
	fmt.Printf("%T\n", f2) //32λ 
//����
	var a1 complex64       var a2 complex128
	a1=1+2i
	fmt.Println(a1)
//����ֵ            1            0
	bool  ֻ��true���棩��false���٣�����ֵ 
	Ĭ��ֵΪfalse     
	���������Σ�0 1��ǿ��ת��Ϊ������ 
	�޷�������ֵ���㣬Ҳ�޷����������ͽ���ת�� 
//�ַ���   
	�ַ���:%s "˫����" ���ͣ�string 
	�ַ��� %c '������' ���ͣ�byte��int8������ASCII���ַ�  �Լ� rune��int32������UTF-8�ַ�   
	�����ַ����� ` `  ԭ�����  
	A:=`��ĳĳ 
	��˧B `
    //�ַ�����ز�����
	B:="����"
	C:="��˧B" 
	len(B)  //�ַ�������
	D:=B+C  //�ַ���ƴ��
	D:=fmt.Sprintf(B,C) //�ַ���ƴ�ӣ�����ӡ��ͬ�� 
	fmt.Printf("%s%s",B,C) //ֱ�Ӵ�ӡ��B��C�������˧B  
    //�޸��ַ�����
	s2:=[]rune(s1)  //�и�Ϊ[]rune��[]byte���͵���Ƭ  
	fmt.Println(string(s2))  //��ת�����ַ����������
	//�ַ����и�
	s:="how do you do"
	s3:=strings.Split(s," ") //���ո��и� �õ�s3��Ƭ���� 
//�Զ������������ͱ��� (��type)
	type a int	//�Զ������� ���������:main.a 
	type b=int  //���ͱ��� 	 �������int����  ��byte��int8�����ͱ��� ��rune��int32 
//�������� 
    _   ����������ĳ��ֵ  ��ռ�������ռ� �������ڴ� 	
	 
//�ַ���ת��� 
\	\r �س��� \n ���з� \t �Ʊ����Tab���� \" " ˫���� \\ ��б�� 

## ������������
//����   ��array�� 
	����ָ��Ԫ�ص����ͺ����� 
	//��ʼ��
	var A [3]bool //Ĭ��Ϊ��ֵ [false false false] 		
	A=[3]bool{true,true,true}
	B:=[5]int{0:1,4:2}//����������ʼ��[1 0 0 0 2]
	C:=[...]int{1,2,3,4,5}//�Զ��ƶϳ��� 
	ע�⣺��ά����ֻ�е�һ�����ʹ��[...] 
	//����   for range
	citys:=[3]string{"����","�Ϻ�","����"} 	
	for _,value:= range citys{//��������Ҳ������index(����)���� 
		fmt.Println(value) 
	} 
	citys:=[2][3]string{  //��ά���� 
		{"����","�Ϻ�","����"},
		{"����","����","��ɽ"}, 
	} 
	for _,v1:= range citys{ //��ά����ı���
		fmt.Println(v1)
		for _,v2:=range v1{
			fmt.Println(v2)
		} 
	}
//��Ƭ  (slice)
	��ָ�롢���ȡ�����	
	"��������",��Ƭ����ֵ 
	����Ƭ��ֵ���κθı䶼�Ǹı�"�ײ�����"�ڵ�ֵ 
	//����
	var s1 []int  //nil ��ʱ��δ�����ڴ� 
		fmt.Println(s1==nil)//true  ����ֱ�ӱȽϣ�ֻ�ܺ�nil�Ƚ�
	//��ʼ��
	s2=[]string{"����","����"}
		fmt.Println(s1==nil)//false ��ʼ��֮��Ͳ�Ϊnil�� ����ָ��Ͳ���nil�ˣ� 
	//�����鹹����Ƭ 
	s1:=s[:] 
	//�и��ַ���
	s1:=[]rune(s) //���ַ���s�и����Ƭs1��s1�����ַ��� 
	s1:=[]byte(s) 
	//make()    ͬʱ�����ڴ� 
	a:=make([]int,2,10)   ���ȣ�2 ������10 
	//���Ⱥ�����
	a:=[5]int{1,2,3,4,5}
	s3:=a[i:j] //��i��j ������j (���󲻺���) 
	s3:=a[1:4] //{2,3,4}  ���ȣ�3 ������4 
	��len( )�󳤶�  cap( )������
	fmt.Printf("len(s3):%d cap(s3):%d",len(s3),cap(s3))
	���������ײ������� ��i��ʼ�м������������Ǽ� 
	//�ٷָ�
	s4:=s3[0:2] //{2,3} ���ȣ�2 ������4  �����󲻺��ң� 
	//�жϿ���Ƭ ������Ϊ0���ǿ���Ƭ�� 
	��len(s) == 0	 ��Ҫ�� s==nil//����Ϊ����ǿ���Ƭ�����ǿ���Ƭ�����ڴ�֮��Ͳ���nil��
	һ��nilֵ����Ƭ���Ⱥ���������0  ��һ�����Ⱥ���������0����Ƭ��һ����nil	 
	//��ֵ����
	s1 := make([]int, 3) //[0 0 0]
	s2 := s1 //��s1ֱ�Ӹ�ֵ��s2������һ���ײ����� 
	//���� copy( )	 
	s3:=make([]int,2,3) //��ǰ�����s3�ĳ��Ⱥ�������������s2  
	copy(s3,s1) //�����õײ����� ֻ����һһ��Ӧ�ŵ�s3�� s3�������ͳ��Ȳ���   
	//����
	��ʽ������һ�£�֧������������for range������ 
	//׷��Ԫ�� append����   �Զ���ʼ����Ƭ 
	s:=[]int{1,2}   
	s=append(s,3,4) //{1,2,3,4}
	��������ʱ����һ�����Խ��С����ݡ�//���ж����������������������������ֱ�Ӹ�����������  �������Ƭ����Ϊ1024���¾ͳ���2  ���ڵ���1024��ѭ������1.25ֱ��������������������   
	  s2:=[]int{3,4}
	s=append(s,s2...) //{1,2,3,4,3,4}  ... ����s2
	//ɾ��Ԫ��   (�ȷָ���׷�ӣ���append  
	s:=[]int{1,2,3,4,5}
	s=append(s[:2],s[3:]...)//{1,2}+4,5  ��{1,2,4,5} ���ָ�󲻺��ң� 
	//����
	a:=[...]int{3,7,8,9,1}
	sort.Ints(a[:]) // a[:] �����鹹����Ƭ 
//ָ��	  ֻ�ܶ����ܸ�	    
	a:=&b //aȡ��b�ĵ�ַ����ʱaΪָ�� ������*int
	c:=*a //���ݵ�ַ��ֵ��c��������aָ���int���� 
	�������ͣ�*int  *string ��
	//��ַ 
	fmt.Printf("%p",&b)  //b�ĵ�ַ 
	fmt.Printf("%p", a)  //b�ĵ�ַ��ָ��a��ֵ�� 
	fmt.Printf("%p",&a)  //a�ĵ�ַ
	//new 
	a:=new(int) //����һ��ָ������͵�ָ��   ����һ���µ�ַ 
	b:=new(bool)  
	//make
	������slice��map�Լ�channel�����ڴ� //�������������ͱ��� 
//map  �����ӳ��  ��ֵ��  �����趨���ȣ������ڴ� 
	map[KeyType]ValueType //KeyType:�������� ValueType:��Ӧֵ������
	map[int]string        //��ʱ��δ�����ڴ� 
	//��ʼ�� 
	(1)a:=make(map[int]string,5) //make ����map�������ڴ�
	   a[100]="���Ӻ�"
	(2)b:=map[string]string{    //����ͬʱ��ʼ�� 
		"username": "ɳ��С����",
		"password": "123456",
	}
	//�ж��Ƿ����    (һ����ok) 
	v := Map[key]    // v: ��Ӧֵ����
	v, ok := Map[key]//ok������ֵ(true  false)
	_, ok := Map[key]//�����ж� 
	if !ok {                   
		fmt.Println("���޴���")
	} else {                
		fmt.Println(v) 
	}
	//����  for range
	for key,value := range scoreMap {
		fmt.Println(key,value)
	}
	for key := range scoreMap {     //ֻ����key 
		fmt.Println(key)
	}
	for _,value := range scoreMap { //ֻ����value
		fmt.Println(value)
	}	
	//��һ��˳����� 
	var keys = make([]string, 0, 200) //����һ����Ƭ 
	for key := range scoreMap {		//ȡ��map�е�����key������Ƭkeys
		keys = append(keys, key)
	}
	sort.Strings(keys)	//����Ƭ��������
	for _ , key := range keys {		//����������key����map
		fmt.Println(key, scoreMap[key])
	}
	//ɾ��   delete  
	delete(scoreMap,"���Ӻ�")//ɾ��Ԫ��,��nil���޴�Ԫ��,���޲���
	aaa:="����"
	delete(scoreMap,aaa) 
	// Ԫ��Ϊmap���͵���Ƭ
	slice := make ([]map[int]string,2,3) 
	slice[0]=make(map[int]string,9) //δ�����ڴ��map��Ҫ����make�����ڴ� 
	slice[0][100]="QQQ" // slice:[map[100:QQQ] map[]]
	//ֵΪ��Ƭ���͵�map
	m1:=make(map[string][]int,10)
	m1["����"]=[]int{1,2,3} // m1: map[������[1,2,3] ]	
//�ṹ��  ��struck��	
	//����  
	type qqq struct{//������Ϊqqq�Ľṹ������ 
		x int    
		y int 		//ռ��һ���������ڴ�ռ�
	}
	//��ʼ�� 
	(1)var p qqq   //�������� p
		p.x=1	   //����p�е�ĳһ���ֶ� 
		p.y=2	
	(2)p:=qqq{     //��ֵ�Գ�ʼ�� key-value 
		x:1,    
		y:2,       // :  �� 
	} 
	(3)p:=qqq{ 	   //ֵ�б��ʼ��   һһ��Ӧ  
		18,		
		24,
	} 
	//���캯��     ��new��ͷ����  
	func newQqq (x,y int) (*qqq) { //ָ��ʡ�ڴ� Ҳ���Բ���ָ��ֱ��qqq 
		return &qqq{		
			x:x,
			y:y,
		} 		//����qqq���͵Ľṹ�����(��ָ��) 
	}	
	p:=newQqq(1,2)  //����newQqq 
	//�����ṹ�� 
	var s struct{	//��������ʱ����
		a int
		b string
	}{10,"ս����"}  //ͬʱ��ֵ 
	//ָ��ṹ��
	���ṹ�����ݽ϶� ��ָ����Լ����ʡ����ʱ���ڴ�ռ��
	(1)var p qqq 
	    a:=&p  	 //���ͣ�*main.qqq
	  (*a).x=1   //�����ڴ��ַ�ҵ�ԭ����  �޸�ָ��Ľṹ���е�ֵ
        a.x=1    //��д Go�﷨�ǣ�ָ��a�Զ���ԭ���� ���ü�*  
	(2)a:=new(qqq) //����ָ��a  ָ��qqq���� �������ַ 
	(3)a:=&qqq{  //���岢��ֵ
		x:2, 
		y:4,		//��ֵ����Ӷ��� 
	}
	(4)a:=&qqq{   
		1,			
		2,
	}
	//�ṹ��Ƕ��
	type aaa struct{
		a int
		b qqq	//Ƕ�ױ�Ľṹ�� 
		qqq     //����Ƕ�� 
	} 	
	 
//�������ͽ����ߣ�
	��������ӷ��� 
	//ֵ����(������ֵ������)
	func (q qqq)wang(){ //ֻ������qqq���͵ĺ��� 
		fmt,Printf("%v��������~",q.x)
	} 	 //������ ʹ����������ĸ��Сд���� 
	q1:=newQqq(1,2)
	//���÷���
	q1.wang()   
	//ָ������(����ַ)    	  	 //���������ָ�� 
	func (q *qqq)jiayi(){ 		 //(1)��Ҫ�޸�ֵ
		q.x++       			 //(2)�ڴ�̫�� 
	}  					 		 //(3)��֤һ����(��������ʹ����ָ��)
	q1.jiayi()//(&q1).jiayi()�ļ�д��ʽ 
	//���Զ���������ӷ���  
	type myInt int //�ȶ����Լ���������� 
	func (m myInt)hello(){ //����ʵ��
		fmt.Println("����һ��int")
	} 

//�ӿ�   interface 
	�ӿ���һ��(�����)���ͣ�ֻԼ��ӵ����Щ���� 
	ʵ�����й涨�����Ľṹ����Ǵ˽ӿ����� 
	//����
	type aaa interface{ //����ӿ�����aaa
		b()  
		c() //�������з����ı�������aaa����
	} 
	var a1 aaa//���������֣�1����̬���ͣ�2����ֵ̬ 
	//ָ��������ֵ����
	ʹ��ֵ������ʵ�ֽӿڣ��ṹ�����ͺͽṹ��ָ�����͵ı��������Դ� 
	��ָ�������ʵ�ֽӿڣ�ֻ�нṹ��ָ�����͵ı������Դ� 
	type 
	
	//һ���ṹ�����ʵ�ֶ���ӿ�
	type mover interface{ move() } 
	type eater interface{ eat(string) } 
	func (c *cat) move(){fmt.Println("��è��")}
	func (c *cat) eat(food string){fmt.Printf("��%s",food)}
	//�ӿ�Ƕ��
	type animal interface{
		mover  //�ӿ� 
		eater
	}
	//��Ϊ�������� 
	func da(x,aaa){ //����Ϊaaa����
		x.b() 
	}
	//�սӿ���Ϊ��������
	func f1(a,interface){
		fmt.Printf("type:%T,value:%v\n",a,a)
	} 	 
	//�սӿ�����  
	interface{}  //�κ����Ͷ��ǿսӿ�����  ֱ��ʹ��
	m1:=make(map[int]interface{},10)
	map[1]=100086
	map[2]="qqq"
	map[3]=true
	map[4]=[...]string{"��","��","rap"}
	//���Ͷ���   �жϿսӿڽ��յ���ʲô���͵�ֵ 
	str,ok:=a.(string)   //1 strΪ��Ӧֵ����ֵ okΪ����ֵbool 
	switch t:=a.(type){  //2 �ж����� �������ֵ 
	case string:
		fmt.Println("��һ���ַ�����",t)
	case int:
		fmt.Println("��һ��int��",t)			
	} 
	
	 
##����
	������һ�δ���ķ�װ����һ�δ�����������װ��һ�������У�����������֣�ÿ���õ�����ʱ��ֱ���ú��������þͿ����ˣ��ܹ��ô�������� ����ࡣ	
	//����    ( ���� )   (����ֵ) 
	func sum(x int,y int)(ret int){ //�����ͷ���ֵ��������Ҳ���Բ�����  ͬʱ�ڴ˺����ڲ�������x,y��ret 
		return x+y //return����ʡ��  ���ض����ret 
	} 
	//û�з���ֵ
	func f1(x int,y int){
		fmt.Println(x+y)
	} 
	//û�в���
	func f2( ) int{ //����ֵ�����Ϳ��Բ��ü����� 
		return 3
	} 
	//û�в���Ҳû�з���ֵ
	func f3(){
		fmt.Println(f3)
	}  
	//�������ֵ 
	func f4()(int,string){
		return 1��"����" //�������ֵ��ʱ�� �����ö���������� 
	}   
	//�������͵ļ�д 
	func f5(x,y,z int��a��b string)int{
		return x+y//�������ж������������һ�µ�ʱ�򣬿��Խ������һ������������ʡ�� 
	} 
	//�ɱ䳤����
	func f6(x string,y ...int){ //�ɱ䳤����������ڲ�������� 
		fmt.Println(y)   //y����Ƭ[]int  �ɴ����ⳤ�ȵ�ֵ 
	} 
//������Ϊ�����ͷ���ֵ
	����Ҳ�Ǳ��������� func(int)int �� 
	func f1( x func(int)int ) ( y func(int)int ) {
		printf("%T",x) //func(int)int
		return y
	} 
//��������
	�����ڲ����������������ֵĺ���  ��������û�к����� 
	���������ڶ���ʱ��Ҫ���浽ĳ��������
	f1:=func (x int,y int){
		fmt.Println(x+y)
	} 
	f1(4,5) 		//���� 
	//����ִ�к��� 
	���ֻ����һ��  ���������Լӣ���ֱ��ִ�� 
	func(x,y int){
		fmt.Println(x+y)
	}(4,5) 		//ֱ��ִ��
//�հ�
	�հ�=����+���û������ⲿ������ 
	//f2 ���� f3 ���뵽 f1 ������ 
	func f1(f func()){f()}//f1��Ҫfunc()���͵Ĳ�������ȥ 
	func f2(x,y int) {fmt.Println(x+y)}//f2���f1 
	func f3(f2.1 func(int,int),x,y int) func(){ 
		return func(){  f2.1(x,y)	}
		}//���캯������f2����ȥ����һ��αװ�ĺ�����f4�� 
	func main(){
		f4:=f3(f2,100,200) //��ʱf4����һ���հ� �������������Լ����ⲿ��f3���еı��� f2.1()��x��y 
		f1(f4) 	
	}	
//defer
	�ӳٴ�������������  һ�������ͷ���Դ
	���ж��defer��� �Ƚ���� ѹջ����
			fmt.Print(1)	
	defer 	fmt.Print(2)
			fmt.Print(3) // 1 3 2
	//defer�뺯������ֵ
	return ������ 1 ������ֵ��ֵ 2 RET ������ԭ�Ӳ����� 
	defer����return������֮��ִ�� ���Ը��Ƿ���ֵ���� 
		//����ֵδ��������
		defer����ı䷵��ֵ
		//����ֵ�����˱����� 
		��defer�иı�˱���ֵ�ͻ�ı����ֵ 
	ͬʱҪע�������򣨴�x�Ǳ�x�����ܸı���Ǹ�������defer�����к������ֶ����˸�x����ԭ��x��ֵ�� ����ı����ֵ 
	//defer�������в���
	��ȷ�������ٽ����ѹջ   ����ʱֱ����ȷ���Ĳ���������� 
	fmt.Print(a,b)         //ѹջʱѹ��ȷ����ֵ  fmt.Print(1��2) 
	//�������ǰ��defer  
	defer f1(a,b,f2(a,b))  //ѹջʱѹ�� defer f1��2��2��4�� 
	���˺�������Ĳ����л��к���   ȷ������ʱ�������������������������ѹ��	
//���ú���
	close	��Ҫ�����ر�channel
	len		�����󳤶ȣ�����string��array��slice��map��channel
	new		���������ڴ棬��Ҫ��������ֵ���ͣ�����int��struct�����ص���ָ��
	make	���������ڴ棬��Ҫ���������������ͣ�����chan��map��slice
	append	����׷��Ԫ�ص����顢slice��
	panic��recover	������������
//panic/recover      ��һ�㲻д�� 
	panic()  ������ִ����±���
	recover() �ָ��������ִ�� ������defer����в�����Ч���������ã�	
	defer һ��Ҫ�ڿ�������panic�����֮ǰ���� 
//�ݹ�   ���ں������ظ����ñ����� 
	func QQQQQ(n int)int{  //�������߷�  һ��1��2��̨�� 
		if n==1{return 1}
		if n==2{return 2}
		return QQQQQ(n-1)+QQQQQ(n-2) 
	} 

	
 






	 
}

	//go mod init +�ļ���     ����go.mod�ļ�

����ͬĿ¼�Ķ��Դ���ļ�ʱ�������� go build �ĺ����ṩ����ļ������������ִ���ļ�
�ڴ����������Ŀ¼��ʹ�� go build���� go build �����Ҫ�����Դ���ļ�����

	��ƽ̨���� 
 SET CGO_ENABLED=0  ����CGO 
 SET GOOS=darwin    Ŀ��ƽ̨ �� Linux  Windows  darwin(mac) 
 SET GOARCH=amd64   Ŀ�괦�����ܹ� 

//�������� 
 go build         �����ļ����ڵ�����.go�ļ� ��������.exe�ļ�
 go run  main.go  ִ��main.go�ļ� 
 go install       �ȱ���󿽱� 
 
 
 
 
	
