import java.util.*;
import java.math.*;
public class Main {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		BigInteger b = new BigInteger("17");
		while(true) {
			BigInteger a = cin.nextBigInteger();
			if(a.equals(BigInteger.valueOf(0))) break;
			BigInteger m = a.remainder(b);
			if(m == BigInteger.valueOf(0)) System.out.println("1");
			else System.out.println("0");
		}
	}
}