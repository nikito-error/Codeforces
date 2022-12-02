
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class SUM_1742A {
	static Scanner scanner= new Scanner(System.in);
 public static void main(String[] args) {
	  int t = scanner.nextInt();
	 while(t>0) {
		 int a=scanner.nextInt();
		 int b=scanner.nextInt();
		 int c=scanner.nextInt();
		 
		 if((a+b)==c || (a+c)==b || (b+c)==a) {
			 System.out.println("YES");
		 }else {
			 System.out.println("NO");
		 }
		 
		 t--;
	 }
}
}

