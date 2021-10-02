import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
class JavatNum
{
public static void main(String [] args)  throws IOException
{
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
     
System.out.println("enter your full name" );
String fullName=br.readLine();

System.out.println("love u \n and \n Welcome\t" +fullName);
  
}
}