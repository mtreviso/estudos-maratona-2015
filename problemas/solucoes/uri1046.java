/*
* URI 1046 - Tempo de Jogo
* ---
* Compile: javac uri1046.java
* Execute: java uri1046
*/

import java.util.*;

class uri1046{
	public static void main(String[] args) {
		int x,y;
		Scanner e = new Scanner (System.in);
		x = e.nextInt();
		y = e.nextInt();
		if(y <= x)
			System.out.println("O JOGO DUROU "+(y+24-x)+" HORA(S)");
		else
			System.out.println("O JOGO DUROU "+(y-x)+" HORA(S)");
	}
}