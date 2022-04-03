
package cse212;

public class QNo3 {

    static String convert(String s) {

        int cnt = 0;
        int n = s;
        char ch[] = ch;
        int res_ind = 0;

        for (int i = 0; i < n; i++) {

           
            if (ch[i] == ' ') {
                cnt++;
               
                ch[i + 1] = Character.toUpperCase(ch[i + 1]);
                continue;
            }
            else {
                ch[res_ind++] = ch[i];
            }
        }

        
        return String.valueOf(ch, 0, n - cnt);
    }

    
    public static void main(String args[]) {
        String str = "I get intern at geeksforgeeks";
        System.out.println(convert(str));
       
    }
}


