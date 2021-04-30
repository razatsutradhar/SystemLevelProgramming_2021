import java.util.Scanner;
class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter a number");
    int num = sc.nextInt();
    int x = 0;
    int i = 1;
    while(i <= num){
      int s = i * i;
      x += s;
      i++;
    }
    System.out.println("x="+x);
  }
}
