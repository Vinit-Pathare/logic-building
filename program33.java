 //approach 1

 import java.util.Scanner;

 class program33
  {

    public static void main(String A[] )
     {
        Scanner scanner = null;
        int iValue1 = 0, iValue2 =0, iResult =0;
         


         scanner = new Scanner(System.in);

         System.out.println("enter first number : ");
         iValue1 =scanner.nextInt();

         System.out.println("enter second number : ");
         iValue2 =scanner.nextInt();

         iResult = iValue1 + iValue2;  //business logic

         System.out.println("addition is : "+iResult);

        

    }

    
}
