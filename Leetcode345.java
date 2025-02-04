class Solution {
    public String reverseVowels(String s) {
        char st[] = s.toCharArray();
        int i=0;
        int j=st.length-1;
        while(i<j){
            if(isvowel(st[i])==false){
                i++;
            }
            else if(isvowel(st[j])==false){
                j--;
            }
            else {
                char temp = st[i];
                st[i] = st[j];
                st[j] = temp;
                i++;
                j--;
            }
        }
        return new String (st);
    }
    public boolean isvowel (char s){
        if(s=='a'|| s=='e' || s=='i' || s=='o' || s=='u' || s=='A' ||s=='E' || s=='I' || s=='O' || s=='U'){
            return true;
        }
        return false;
    }
}