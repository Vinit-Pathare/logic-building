 import java.util.Scanner;
 
 class program58
 {

    
    public static void main(String A[])
    {
      Scanner scanner = new Scanner(System.in);
      int iValue = 0;



      Iteration iteration = new Iteration();
      System.out.println("enter the frequency :");
      iValue = scanner.nextInt();
        
       iteration.Display(iValue);
    }
}
 class Iteration  
 {
    public  void Display(int iNo)
    {

       int icnt = 0;
         //input filter
       if (iNo <= 0) 
       {
         System.out.println("invalid input");
         return ;
       }
       for(icnt = 1; icnt <= iNo; icnt++)
       {
         System.out.println("jay ganesh");
       }
}
 }
