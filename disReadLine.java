//anscii no and value type....convert to ancsii no.

import java.io.IOException;
import java.io.DataInputStream;
   class  disReadLine{
public static void main(String[] args) throws IOException{
DataInputStream dis=new DataInputStream(System.in);
String data=dis.readLine();
System.out.println(data);
}
}
//bufferreader can read 1 data in 2 byte format
//bufferReader(System.in)---- can read   2 byte System.in giving 1  byte(so we need 1 bridge and  give 2 byte data nnd give 1 data)
 //bufferReader(new InputStreamReader(System.in));






  //public static in.read())!=13){
//void main(String[] args) throws IOException
//	{
//DataInputStream dis=new DataInputStream();
//String data="";
//int b;
//while( (b=System.data =data+(char)b;
//}
//System.out.println(data);

//i/p-14521452145214521452
//o/p-14521452145214521452
//static below
//int a=System.in.read();
//int b=System.in.read();
//int c=System.in.read();
//int d=System.in.read();
//int e=System.in.read();
//int f=System.in.read();
//System.out.println("a:"+a);
//System.out.println("b:"+b);
//	System.out.println("c:"+c);//for a b c -----if 5 pass otpt for a=53 b=13 for string (c=10 for enter)
//System.out.println("d:"+d);
//	System.out.println("e:"+e);
//System.out.println("f:"+f);
//if we enter 8....otpt will be a=53 b=13..........13 is for enter
//	System.out.println("a:"+(char)a);
//System.out.println("b:"+(char)b);
//String s1=""+(char)a+(char)b;
//System.out.println("s1:"+s1);
//int c=Integer.parseInt(s1);
//System.out.println("c:"+c);
	//}
//}
//1=49   2=50
//1)it can nt read complete value/no/word
// it can read only one byte at a time
//2) it cannot return the enter value as it is...
// it retun each character in their asscii no
//3)  we must add addtional code to read complete character
//we must convert them as character
//we must concat them as a string
//we mmut convert i=them into its  respective datatype