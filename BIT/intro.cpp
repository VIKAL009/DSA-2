#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int get_bit(int n,int pos){
    return (n & (1<<pos))!=0;
}
int set_bit(int n,int pos){
    return (n | (1<<pos));
}

int clear_bit(int n,int pos){
    int mask = ~(1<<pos);
    return (n & mask);
}
int update_bit(int n,int pos,int val){
    int mask = ~(1<<pos);
        n = (n & mask);
        return (n | (val<<pos));
}
bool is_powerOf2(int n){
    return (n && !(n & n-1));
}
int _ones(int n){
   int  _count=0;
   while (n)
   {
       n = (n & n-1);
       _count++;
   }
   return _count;
}
void _subsets(int arr[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }cout<<endl;
    }
}
int _unique(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum = (xorsum ^ arr[i]);
    }
    return xorsum;
}
void _two_unique(int arr[],int n){
    int xorsumm=0;
    for(int i=0;i<n;i++){
        xorsumm = (xorsumm ^ arr[i]);
    }
    int tempxor = xorsumm;
    int pos=0;
    int bit=0;
    while (bit!=1)
    {
        bit = (xorsumm & 1);
             xorsumm = xorsumm>>1;
              pos++; 
    }
    int newxore=0;
    for(int i=0;i<n;i++){
        if((arr[i] & (1<<(pos-1)))){
           newxore = (newxore ^ arr[i]);
        }
    }

    cout<<newxore<<" "<<(newxore ^ tempxor);
    
}
int _unique_2(int arr[],int n){
    int ans=0;
       for(int i=0;i<64;i++){
           int _count=0;
           for(int j=0;j<n;j++){
               if((arr[j] & (1<<i))){
                   _count++;
               }
           }
           if(_count%3!=0){
               ans = (ans | 1<<i );
           }
       }
       return ans;
}
int main(){
    // get bit;
    // cout<<get_bit(5,2);          //5 = 0101   :  1<<2 = 0100

    // set bit;
    // cout<<set_bit(5,1);

    // clear bit
    // cout<<clear_bit(5,2);

    // update bit
    // cout<<update_bit(5,1,1); 

    // check power of 2         8 = 1 0 0 0     7 = 0 1 1 1     ;  8 & 7 = 0 0 0 0

    // cout<<is_powerOf2(16);

    // number of ones;

    // cout<<_ones(7);

    // int arr[]={1,2,3,4}; 
    // _subsets(arr,4);

    // find unique number; excep this all present at twice;   ^ (xor)>  bothe same-->0     bothe different-->1     NOTE:-same+same--->0
    // int arr[]={1,2,3,4,1,2,3};
    // cout<<_unique(arr,7);

    // int arr[]={2,4,6,7,4,5,6,2};
    // _two_unique(arr,8);

    // find unique number; excep this all present at thrice;
 
    // int arr[]={1,2,3,4,1,2,3,1,2,3};
    // cout<<_unique_2(arr,10);

    int A=8;
    // cout<<__builtin_popcount(3)<<endl; //number of ones
    // cout<<__builtin_ctz(8)<<endl;   //count trailing zeros
    // cout<<log2(A^(A&(A-1)));
    // cout<< log2(A&(-A))<<endl;
    // cout<<log2(A&(~(A-1))) <<endl;
    // cout<<A<<" "<<-A<<" "<<log(A&(~(A-1)));     //hence  -A =  ~(A-1)

    // binary to decimal
    // bitset<8> b("1000");
    // int ab = b.to_ulong();
    // cout<<endl<<b;
    bitset<8> b(8);
    cout<<endl<<b;
    cout<<endl<<b.to_string();
    
    // int a=-12;
    // int b= 5;
    // bitset<8>k(a);
    // bitset<8>p(b);
    // cout<<~k<<endl;              // +  -----> - (flip_all_digits+1)in positive
    // cout<<p<<endl;
    

    // cout<<~(-1);
}

//*****************************************************************************************************************

// int main(){

//     // default constructor initializes with all bits 0 
//     bitset<32> bset1; 
  
//     // bset2 is initialized with bits of 20 
//     bitset<32> bset2(20); 
  
//     // bset3 is initialized with bits of specified binary string 
//     bitset<32> bset3(string("1100")); 
  
//     // cout prints exact bits representation of bitset 
//     cout << bset1 << endl; // 00000000000000000000000000000000 
//     cout << bset2 << endl; // 00000000000000000000000000010100 
//     cout << bset3 << endl; // 00000000000000000000000000001100  
  
//     // declaring set8 with capacity of 8 bits 
  
//     bitset<8> set8; // 00000000 
  
//     // setting first bit (or 6th index) 
//     set8[1] = 1; // 00000010 
//     set8[4] = set8[1]; // 00010010 
//     cout << set8 << endl; // 00010010
  
//     // count function returns number of set bits in bitset 
//     int numberof1 = set8.count(); 
  
//     // size function returns total number of bits in bitset 
//     // so there difference will give us number of unset(0) bits in bitset 
//     int numberof0 = set8.size() - numberof1; 
  
//     cout << set8 << " has " << numberof1 << " ones and " << numberof0 << " zeros\n"; 
//     // 00010010 has 2 ones and 6 zeros
  
//     // test function return 1 if bit is set else returns 0 
//     cout << "bool representation of " << set8 << " : "; 
//     for (int i = 0; i < set8.size(); i++) 
//         cout << set8.test(i) << " "; 
//     cout << endl; 
//     // bool representation of 00010010 : 0 1 0 0 1 0 0 0 
  
//     // any function returns true, if atleast 1 bit is set 
//     if (!set8.any()) 
//         cout << "set8 has no bit set.\n"; // bset1 has no bit set. 
  
//     // none function returns true, if none of the bit is set 
//     if (!bset1.none()) 
//         cout << "bset1 has some bit set\n"; 
  
//     // set() sets all bits 
//     cout << set8.set() << endl; // 11111111
  
//     // set(pos, b) 
//     cout << set8.set(4, 0) << endl; // makes set8[4] = 0
//     // 11101111
  
//     // set(pos) 
//     cout << set8.set(4) << endl; // makes set8[4] = 1  i.e. default is 1
//     // 11111111
  
//     // reset function makes all bits 0 
//     cout << set8.reset(2) << endl; // 11111011
//     cout << set8.reset() << endl; // 00000000
  
//     // flip function flips all bits i.e.  1 <-> 0 and  0 <-> 1 
//     cout << set8.flip(2) << endl; // 00000100
//     cout << set8.flip() << endl; // 11111011
  
//     // Converting decimal number to binary by using bitset 
//     int num = 100; 
//     cout << "\nDecimal number: " << num << "  Binary equivalent: " << bitset<8>(num);
//     // Decimal number: 100 Binary equivalent: 01100100 
  
//     return 0; 
// } 
