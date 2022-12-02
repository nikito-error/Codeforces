import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

public class Increasing_1742B {
static Scanner scanner =new Scanner(System.in);
public static void main(String[] args) {
	int t=scanner.nextInt();
	while(t>0) {
		Boolean f=true;
		int n=scanner.nextInt();
		ArrayList<Integer> arr=new ArrayList<Integer>();
		for(int i=0;i<n;i++) {
			int a=scanner.nextInt();
			arr.add(a);
		}
		Collections.sort(arr);
		for(int k=0;k<arr.size();k++) {
			if(k+1<arr.size()) {
			if(arr.get(k)<arr.get(k+1)) {
				f=true;
			}else if(arr.get(k)>=arr.get(k+1)){
				f=false;
				break;
			}
			}
		}
		if(f) {
			System.out.println("YES");
		}else {
			System.out.println("NO");
		}
		t--;
	}

}
}
