import java.io.*;
class Solution
{
    public static void main(String args[])throws Exception
    {
        int n;
        double f;
        String ch;
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        n=Integer.parseInt(br.readLine());
        f=Double.parseDouble(br.readLine());
        ch=br.readLine();
        System.out.println("String: "+ch);
        System.out.println("Double: "+f);
        System.out.println("Int: "+n);
    }
}