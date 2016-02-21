import java.io.*;
public class num_check
{
  public static void main(String[] args) {
    long startTime = System.currentTimeMillis();
    int i,j,k;
    for(i=0;i<=20;i++){
      for(j=20;j<=800;j++){
        for(k=800;k<=1500;k++){
          System.out.println(i+" "+j+" "+k);
        }
      }
    }
    long endTime   = System.currentTimeMillis();
    long totalTime = endTime - startTime;
    System.out.println(totalTime);
  }
}
