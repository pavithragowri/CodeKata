import java.util.*;
class FindChar
{
  public static void main(String args[])
  {
    Scanner in = new Scanner(System.in);
		String s = in.nextLine();
	    String tr = s.trim();
	    int count=0;
	    char c[] = tr.toCharArray();
	    int len = tr.length();
	    for(int i=0;i<len;i++)
	    { 
	        if(Character.isLetter(c[i]))
	        {
	            count++;
	         }
	    }
	    System.out.println(count);
   }
}
      
