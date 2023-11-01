bool isUgly(int n){
    if(n<=0){
        return false;
    }else if(n==1){
        return true;
    }else{
  while (n % 2 == 0) {   /* the given number is divided by 2,3,5 until it cannot be divided.If the answer is 1 then it is an ugly number*/ 
        n/= 2;
    }
    while (n % 3 == 0) {
        n /= 3;
    }
    while (n % 5 == 0) {
        n/= 5;
    }
    return (n == 1);
}
}
