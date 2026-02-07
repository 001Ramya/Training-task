bool isPalindrome(int x) {
     int r=0,t;
     long long rev=0;
     t=x;
     while(x>0)
      {
       int r=x%10;
       rev=(rev*10)+r;
       x=x/10;
      }
      if(rev==t)
         return true;
      else
         return false;
}
