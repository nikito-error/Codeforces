import java.util.Scanner;

public class Stripes_1742C {
	static Scanner scanner=new Scanner(System.in);
	public static void main(String[] args) {
	 int t=scanner.nextInt();
	 while(t>0) {
		 int rows=8;
		 boolean f=false;
		 for(int j=0;j<rows;j++) {
			 String s=scanner.next();
			if(s.equals("RRRRRRRR")) {
				f=true;
			}
		 }
			 if(f) {
				 System.out.println("R");
			 }else {
				 System.out.println("B");
			 }
		 t--;
	 }
	 
 }
}
