vector <int> rotate (int n, int d){
  //code here
  int n1 = n,d1 = d;
  while(d1--){
      if(n1&1){n1>>=1; n1|=1<<15;}
      else n1>>=1;
  }
  while(d--){
      if(n&(1<<15)){n<<=1; n|=1;}
      else n<<=1;
      n&=((1<<16)-1);
  }
  return {n,n1};
}
