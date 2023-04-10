import java.util.*;
class Solution
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n,i,j;
        n=sc.nextInt();
        for(i=1;i<=10;i++)
        {
            j=n*i;
            System.out.println(n+" x "+i+" = "+j);
        }
    }
}