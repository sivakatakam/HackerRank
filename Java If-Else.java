import java.io.*;
class Solution
{
    public static void main(String args[])throws Exception
    {
        int n;
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        n=Integer.parseInt(br.readLine());
        if(n%2!=0||n%2==0&&n>=6&&n<=20)
        System.out.println("Weird");
        else
        System.out.println("Not Weird");
    }
}