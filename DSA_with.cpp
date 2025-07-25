// #include<iostream>
// using namespace std;
// class Queue{
//     int front;
//     int top;
//     int size;
//     int *que;
//     public:
//     Queue(int val){
//         front = -1;
//         top = -1;
//         size = val;
//         que = new int[val];
//     }
//     void enque(int val){
//         if(top == size-1){
//             cout<<"Over flow"<<endl;
//             return;
//         }
//         que[--top] = val;
//         cout<<"Que got "<<que[top];
//     }
//     void deque(){
//         if(top == -1){
//             cout<<"Under flow"<<endl;
//             return;
//         }
//         cout<<"poped "<<que[front];
//         front++;
//     }
//     void display(){
//         // int alpha = front;
//         cout<<"elements: ";
//         for(int i =front;i<size;i++){
//             cout<<que[i]<<" ";
//         }
//     }
// };
// int max1(int arr[],int a){
//     int max = arr[0];
//     for(int i =0;i<a;i++){
//             if(arr[i]>max){
//                 max = arr[i];
//                 arr[i] = 0;
//                 return max;
                
//         }
//     }
// }
// int main(){
//     int a;
//     cin>>a;
//     int arr[a];
//     for(int i =0;i<a;i++){
//         cin>>arr[i];
//     }
//     Queue obj1(a);
//     for(int i =0;i<a;i++){
//         int max = max1(arr,a);
//         obj1.enque(max);
//         cout<<endl;
//     }
//     obj1.deque();
//     obj1.deque();
//     obj1.deque();
//     obj1.deque();
//     obj1.deque();
//     cout<<endl;
//     obj1.display();
// }



// #include<iostream>
// using namespace std;
// class A{
//     public:
//     int a =9;
    
// };
// class B: public A{
//     public:
//     int b =12;
    
// };
// class C:public B{
// public:


// void all(){
//     cout<<a+b;
// }

// };
// int main()
// {
// C obj1;
// obj1.all();
// }


// #include<iostream>
// using namespace std;
// class A{
//     public:
//     int a =9;
    
// };
// class B{
//     public:
//     int b =12;
    
// };
// class C:public B, public A{
// public:


// void all(){
//     cout<<a+b;
// }

// };
// int main()
// {
// C obj1;
// obj1.all();
// }

// #include<iostream>
// using namespace std;
// int mergesort(int arr[],int low,int mid, int high){
//     int i = low;
//     int j = mid +1;
//     int k = low;
//     int B[high+1];
//     while(i <= mid&& j <= high){
        
//     }

// }
// void recursivemerge(int arr[],int low,int high){
//     if(low < high){
//         int mid = low + (high - low)/2;
//         recursivemerge(arr,low,high);
//         recursivemerge(arr,mid+1,high);

//         mergesort(arr,low,mid,high);
//     }
// }
// int main(){
//     int arr[] = {1,2,3,4,5,6,7};
//     int n = 
// }
// #include<iostream>
// using namespace std;
// class abc{
//     private:
//     int x;
//     int y;
//     int z;
//     public:
//     abc(int a,int b, int c){
//         x = a;
//         y = b;
//         z = c;
//     }
//     void display(){
//         cout<<x;
//         cout<<y;
//         cout<<z<<endl;
//     }
//     void operator-(){
//         x = -x;
//         y = -y;
//         z = -z;
//     }
// };
// int main(){
//     abc s(10,-20,30);
//     cout<<"s: ";
//     s.display();
//     -s;
//     cout<<"s: ";
//     s.display();
// }
// #include<iostream>
// using namespace std;
// class score{
//     private:
//     int val;
//     public:
//     score(){val = 0;}
//     void operator++(){val = val+1;}
//     int show(){return val;}
// };
// int main(){
//     score s1, s2;
//     cout<<"\n initial value of s1 object: "<<s1.show();
//     cout<<"\n initial value of s2 object: "<<s2.show();
//     ++s1;
//     ++s2;
//     ++s1;
//     ++s2;
//     cout<<"\n final value of s1 object: "<<s1.show();
//     cout<<"\n final value of s2 object: "<<s2.show();

// }

                // DIAMOND PROBLEM
// #include<iostream>
// using namespace std;
// class A{
//     protected:
//     int x;
//     public:
//     void get_dataA(){
//         cout<<"Enter x: ";
//         cin>>x;
//     }
// };
// class B:public virtual A{
//     protected:
//     int y;
//     public:
//     void get_dataB(){
//         cout<<"enter y: ";
//         cin>>y;
//     }
// };
// class C:public virtual A{
//     protected:
//     int z;
//     public:
//     void get_dataC(){
//         cout<<"enter z: ";
//         cin>>z;
//     }
// };
// class D:public B, public C{
//     public:
//     void sum(){
//         int result = x+y+z;
//         cout<<"result is: "<<result;
//     }
// };
// int main(){
//     D obj1;
//     obj1.get_dataA();
//     obj1.get_dataB();
//     obj1.get_dataC();
//     obj1.sum();
//     return 0;
// }
                            //   MULTIPLE INHERITENCE AMBIGUITY
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     void show_data(){
//         cout<<"in the base of class 1."<<endl;
//     }
// };
// class B{
//     public:
//     void show_data(){
//         cout<<"in the base class 2"<<endl;
//     }
// };
// class C: public B,public A{
//     public:
//     // void display(){
//     //     A:show_data();
//     //     B:show_data();
//     // }
// };
// int main(){
//     C obj1;
//     obj1.show_data();
// }

                            // TYPE CONVERSION
// #include<iostream>
// using namespace std;
// class time{
//     public:
//     int hrs;
//     time(int t){
//         hrs = t/60;
//     }
//     void out(){
//         cout<<hrs<<" hrs";
//     }
// };
// int main(){
//     time obj(12);
//     obj.out();
// }

//                                   CLASS TO BASIC CONVERSION
// #include<iostream>
// using namespace std;
// class student{
//     int roll;
//     float fees;
//     public:
//     student (int a,float m){
//         roll = a;
//         fees = m;
//     }
//     operator int(){
//         return roll;
//     }
//     operator float(){
//         return fees;
//     }

// };
// int main(){
//     int i;
//     float j;
//     student st(5,20.9);
//     j = st;
//     i = st;
//     cout<<"value: "<<i<<endl;
//     cout<<"value: "<<j<<endl;
// }
                                // ORDER OF EXECUTION
                            //   CONSTRUCTOR AND DISTRUCTOR 
                            //    DURING SINGLE INHERITENCE
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     int num;
//     A(){
        
//         cout<<"\n calling default base class constructor: ";
//     }
//     ~A(){
//         cout<<"\ncalling base class distructor: ";
//     }
//     void operator++(){
//         num = num+1;
//     }
// };
// class B:public A{
//     public:
//     B(int a){
//         cout<<a;
//         // cout<<"\n calling default derived constructor: ";
//     }
//     ~B(){
//         cout<<"\n calling derived class destructor: ";
//     }
// };
// int main(){
//     // int a;
//     B obj1(23);
//     // ++obj1;
//     // cout<<obj1.num;
//     return 0;
// }


                        //    MULTILEVEL :->
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     A(){
//         cout<<"base A"<<endl;
//     }
//     ~A(){
//         cout<<"distructor A"<<endl;
//     }
// };
// class B:public A{
//     public:
//     B(){
//         cout<<"base B"<<endl;
//     }
//     ~B(){
//         cout<<"distructor B"<<endl;
//     }
// };
// class C:public B{
//     public:
//     C(){
//         cout<<"base C"<<endl;
//     }
//     ~C(){
//         cout<<"distructor C"<<endl;
//     }
// };
// class D:public C{
//     public:
//     D(){
//         cout<<"base D"<<endl;
//     }
//     ~D(){
//         cout<<"distructor D"<<endl;
//     }
// };
// int main(){
//     D aditya;
// }

                        //    ORDER OF CONSTRUCTOR AND DISTRUCTOR
                        // multilevel and multiple
// #include<iostream>
// using namespace std;
// class A
// {
// public:
// int x,y;
// A(int r,int s){
//     x = r;
//     y = s;
//     cout<<"calling base constructor "<<x<<"  "<<y<<endl;
// }
// ~A(){
//     cout<<"calling base distructor."<<endl;
// }
// };
// class B
// // :public A
// {
// public:
// int l,m;
// B(int p,int q){ //,int r,int s   //:A(r,s)
//     l = p;
//     m = q;
//     cout<<"Calling derived class B "<<l<<" "<<m<<endl;
// }
// ~B(){
//     cout<<"calling derived class B distructor."<<endl;
// }
// };
// class C:public B,public A
// {
//     public:
//     int z;
//     int w;
//     C(int a,int b,int c,int d,int e,int f):B(c,d),A(e,f){
//         z = a;
//         w = b;
//         cout<<"calling derived constructor "<<z<<" "<<w<<endl;
//     }
//     ~C(){
//         cout<<"calling derived class distructor"<<endl;
//     }
// };
// int main(){
//     C aditya(1,2,3,4,5,6);
// }


// #include<iostream>
// using namespace std;

// int main(){
//                             //  dynamic variable allocation
//     int *p = nullptr;
//     p = new int;
//     cin>>*p;
//     int *r = nullptr;
//     r = new int;
//     cin>>*r;
//     int *t = nullptr;
//     t = new int;
//     cin>>*t;
    
//     if(!p){
//         cout<<"Memmory allocation failure.";
//     }else{
//         int *intrest = new int;
//         *intrest = ((*p)*(*r)*(*t))/100;
//         cout<<"Intrest is: "<<*intrest;
//     //     *p = 12;
//     //     cout<<*p;    // memory deallocation
//         delete p;
//         delete r;
//         delete t;
//         delete intrest;
//     }


//     return 0;
// }
//     #include<iostream>
//     using namespace std;
//     int main(){
//         int a;
//         cin>>a;
//         int *arr = new int[a];
//         for(int i =0;i<arr.size()/sizeof(int);i++){
//             cin>>arr[i];
//         }
//         arr
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int *a = new int;
//     int *sum = new int;
//     *sum = 0;
//     cout<<"Enter size: ";
//     cin>>*a;
//     int *arr = new int[*a];
//     if(arr==NULL){
//         cout<<"memory is not provided."<<endl;
//     }else
//     {
//         cout<<"Dynamic memory allocated. "<<endl;
//         cout<<"enter array: ";
//         for(int i =0;i<*a;i++){
//             cin>>*(arr+i);
//         }
//         // cout<<endl;
//         // cout<<"Array: ";
//         for(int i =0;i<*a;i++){
//             // cout<<*(arr+i)<<" ";
//             *sum+=*(arr+i);
//         }
//         cout<<"sum: "<<*sum;
        
//     }
//     delete [] arr;
//     delete a;
//     delete sum;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class Array{
//     int *arr;
//     int size;
//     int sum;
//     public:
//     Array(int a){
//         sum = 0;
//         this->size = a;
//         this->arr = new int[a];
//     }
//     void get_data(){
//         for(int i =0;i <size;i++){
//             cin>>*(arr+i);
//         }
//     }
//     void display(){
//         cout<<"Array: ";
//         for(int i =0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//     }
//     void sum_(){
//         for(int i =0;i<size;i++){
//             sum+=arr[i];
//         }
//         cout<<"sum: "<<sum;
//     }
//     ~Array(){
//         delete [] arr;
//     }
// };
// int main(){
//     int a;
//     cin>>a;
//     Array aditya(a);
//     aditya.get_data();
//     aditya.display();

// }

// #include<iostream>
// using namespace std;
// #include<cstring>
// class string1{
//     char *str;
//     public:
//     string1(const char *s){
//         int a = strlen(s);
//         str = new char[a+1];
//         strcpy(str,s);
//     }
//     void display1(){
//         cout<<"string: ";
//         cout<<str;
//     }
//     ~string1(){
//         delete [] str;
//     }
// };
// int main(){
//     string adi;
//     cout<<"enter string: ";
//     getline(cin,adi);
//     string1 aditya(adi.c_str());
//     aditya.display1();

// }

// #include<iostream>
// using namespace std;
// int sum =0;
// class Employee{
//     public:
//     int id;
//     int salary;
//     void input(){
//         cout<<"enter: ";
//         cin>>id;
//         cin>>salary;
//         sum+=salary;
//     }
//     void display(){
//         cout<<"id: "<<id<<" ";
//         cout<<"salary: "<<salary;
//         cout<<endl;
//     }
// };
// int main(){
//     int n;
//     cin>>n;
//     Employee *p = new Employee[n];
//     Employee *d = p;
//     Employee *flag = p;
//     if(p == nullptr){
//         cout<<"\nMemory allocted failure.\n";
//         return 0;
//     }
//     // int *sum1 =new int;
//     // sum1 = &sum2;
//     int sum2 = 0;
//     for(int i =0;i<n;i++){
//         p->input();
//         p++;
//     }
//     for(int i =0;i<n;i++){
//         d->display();
//         sum2+=d[i].salary;
//         d++;
//     }
//     cout<<"salary: "<<sum2;
//     delete [] flag;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     // const int a = 345;
//     // cout<<a;
//     int arr[5] = {1,2,6,4,5};
//     sort(arr,arr+5);
//     for(int i =0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<binary_search(arr,arr+5,2);

// }

#include<iostream>
using namespace std;
// class Increase{
//     private:
//     int val;
//     public:
//     Increase(){
//         val = 10;
//     }
//                                     //    UNARY OPERATOR OVERLOADING 
//     // void operator ++(){
//     //     val = val+5;
//     // }
//     void display(){
//         cout<<val<<" ";
//     }
// };
// int main(){
//     Increase inc;
//     // ++inc;
//     inc.display();
// }
// class Complex{
//     private:
//     int real;
//     int imag;
//     public:
//     // Complex(int a,int b){
//     //     real = a;
//     //     imag = b;
//     // }
//     void input(){
//         cout<<"Enter real and imag value: ";
//         cin>>real;
//         cin>>imag;
//     }
//     Complex operator+(Complex &obj){
//         Complex temp;
//         temp.real = real+ obj.real;
//         temp.imag = imag+obj.imag;
//         return temp;
//     }
//     void output(){
//         cout<<real<<" "<<imag<<"i"<<endl;

//     }
// };
// int main(){
//     Complex c1,c2,res;
//     c1.input();
//     c2.input();
//     res = c1+c2;
//     c1.output();
//     c2.output();
//     res.output();
// }
// #include<iostream>
// using namespace std;
// class base{
//     public:
//     base(){
//         cout<<"Creating base class constructor.";
//         cout<<endl;
//     }
//     virtual ~base(){
//         cout<<"Deleting base class distructor.";
//         cout<<endl;
//     }
// };
// class derived:public base{
//     public:
//     derived(){
//         cout<<"Creating derived class constructor.";
//         cout<<endl;
//     }
//     ~derived(){
//         cout<<"Deteting derived class distructor";
//         cout<<endl;
//     }
// };
// int main(){
//     base *a = new derived;
//     delete a;
// }

                                        //  HEAP TREE;
// #include<iostream>
// #include<queue>
// using namespace std;
// class Node {
//     public:
//     int data;
//     Node *left,*right;
//     Node(int val){
//         data = val;
//         left = nullptr;
//         right = nullptr;
//     }

// };
// Node *create2(Node *root,int val){
//      Node *newNode = new Node(val);
//      if(root == nullptr){
//          return newNode;
//      }
//      queue<Node*> que;
//      que.push(root);
//      while(!que.empty()){
//          Node *temp = que.front();
//          que.pop();
//          if(temp->left == nullptr){
//              temp->left = newNode;
//              break;
//          }else{
//              que.push(temp->left);
//          }
//          if(temp->right == nullptr){
//              temp->right = newNode;
//              break;
//          }else{
//              que.push(temp->right);
//          }
//    }
//      return root;
//  }
//  void Heapifydown(int arr[],int n,int i){
//     int largest = i;
//     int left = 2*i+1;
//     int right = 2*i+2;
//     // if child is larger then root;
//     if(left < n &&arr[left]>arr[largest]){
//         largest = left;
//     }
//     // if right child is larger than the largest so far;
//     if(right <n && arr[right]>arr[largest]){
//         largest = right;
//     }
//     // if largest is not root , swap and continue heapify;
//     if(largest != -1){
//         swap(arr[i],arr[largest]);
//         Heapifydown(arr,n,largest);
//     }
//  }
// int deleteroot(int arr[],int n){
//     if(n<=0){
//         cout<<"Heap is empty."<<endl;
//         return -1;
//     }
//     int rootvalue = arr[0];
//     arr[0] = arr[n-1];
//     n--;
//     Heapifydown(arr,n,0);
//     return rootvalue;   
// }
// void print(int arr[],int n){
//     for(int i =0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// void insert(int arr[],int n){
//     int i =n;
//     int temp = arr[i];
//     while(i>0&&temp>arr[(i-1)/2]){
//       arr[i] = arr[(i-1)/2];
//         i = (i-1)/2;
//     }
//     arr[(i-1)/2] = temp;

// }
// void createHeap(){
//     int arr[] = {10,20,30,25,5,40,35};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i =1;i<n;i++){
//         insert(arr,i);
//     }
//     Node *root = nullptr;
//     for(int i = 0;i<n;i++){
//         root = create2(root,arr[i]);
//     }
//     print(arr,n);
// }
// int main(){
//     createHeap();
//     cout<<endl;
    
    
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     void alpha(char c){
//         cout<<"Alpha";
//     }
//     void alpha(int a){
//         cout<<"\nalpha "<<a;
//     }
// };

// class B:public A{
//     public:
//     void alpha(int a){
//         cout<<"\nalpha "<<a;
//     }
// };
// class A{
//     public:
//     int a;
//     A(int b){
//         a = b;
//     }
//     A operator+(){
//         return a+1;
//     }
// };
// class B: public A{
//     public:
//     B(int c):A(c){
//     }
// };
// int main(){
//     B a(23);
//     ++a;
// }
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     // void show(){
//     virtual void show(){
//         cout<<"Base class show";
//     }
// };
// class D:public A{
//     public:
//     void show(){
//         cout<<"Derived class show";
//     }
// };
// int main(){
//     A *ptr;
//     ptr = new D;
//     ptr->show();
// }.

// #include<iostream>
// using namespace std;
// void heapify(int arr[],int index,int n){
//     int largest = index;
//     int left = 2*index+1;
//     int right = 2*index+2;
//     if(left<n && arr[left]>arr[largest]){
//         largest = left;
//     }
//     if(right<n && arr[left]>arr[largest]){
//         largest = right;
//     }
//     if(largest!=index){
//         swap(arr[index],arr[largest]);
//         heapify(arr,largest,n);
//     }
// }
// void create_maxheap(int arr[],int n){
//     for(int i =n/2-1;i>=0;i--){
//         heapify(arr,i,n);
//     }
// }
// int main(){

// }
// #include<iostream>
// using namespace std;
// int main(){

//     int a = 9;
//     int b = 9;
//     int x = a - b;
//     // cout<<5/-2;
//     try{
//         if(x != 0){
//             cout<<a/x;
//                     }
//                     else{
//                         throw(x);
//                     }
//     }
//     catch(int i){
//         cout<<"exception";
//     }
// }
// #include<iostream>
// #include<exception>
// using namespace std;
// int main(){
//     int arr[5];
//     int i =0;
//     try{

//     while(1){
        
//         cin>>arr[i];
//         if(arr[i] ==5){
//             throw(6);
//         }
//         i++;
//     }
//     }
//     catch(int &a){
//         cout<<a.what();
//         cout<<endl;
//         // cout<<a.what();
//     }
// }
// #include<iostream>
// using namespace std;
// void func(int a,int b,int c){
//     cout<<"In the function."<<endl;
//     if((a-b)!=0){
//         cout<<c/(a-b);
//         return;
//     }
//     throw(a-b);
// }
// int main(){
//     try{
//         cout<<"in try block.";
//         func(10,10,30);
//     }
//     catch(int i){
//         cout<<"exception.";
//     }
// }.
#include<iostream>
using namespace std;
#include<cstring>
// void func(int x){
//     // if(x==0){
//     //     throw 'x';
//     // }else if(x==1){
//     //     throw x;
//     // }else if(x==-1){
//     //     throw 1.0;
//     // }
//     i
//     cout<<"end the func";
// }
// int main(){
//     try{
//         func(0);
//     }
//     // catch(int i){
//     //     cout<<"Integer exception";
//     // }
//     // catch(char a){
//     //     cout<<"Character exception";
//     // }
//     // catch(double a){
//     //     cout<<"double exception";
//     // }
//     catch(...){
//         cout<<"Default";
//     }
// }
// class error{
//     int err_code;
//     char* err_desc;
//     public:
//     error(int a,const char* d){
//         err_code = a;
//         err_desc = new char[strlen(d)];
//         strcpy(err_desc,d);
//     }
//     void err_display(){
//         cout<<"err_code: "<<err_code<<endl;
//         cout<<"err_desc: "<<err_desc<<endl;
//     }
// };

// int main(){
//     try
//     {
//         cout<<"Press any key";
//         // sleep(5);
//         throw error(99,"New man");
//     }
//     catch(error e)
//     {
//         cout<<"exception catch successfullty: ";
//         e.err_display();
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     try{
//         int b = 0;
//         if(b ==0){
//             throw(5);
//         }
//         int c = 0;
//         if(c == 0){

//         throw 12.001;
//         }
        
//     }
//     catch(int i){
//         cout<<"exception0.";
//     }
//     catch(double i){
//         cout<<"exception12.00.";
//     }
// }
// #include<iostream>
// using namespace std;
// class test{
//     public:
//     test(){
//         cout<<"Constructor: ";
//     }
//     ~test(){
//         cout<<endl<<"Distructor: ";
//     }
// };
// int main(){
//   try{
//     try{

//     test t1;
//     throw 10;
//     }
//     catch(int i){
//         cout<<"Handling";
//         cout<<endl;
//         throw;
//     }
//   }
//   catch(int i){
//     cout<<"Done";
//   }

// }

// #include<iostream>
// using namespace std;
// class Graph{
//   static const int Max = 10;
//   int numnodes;
//   int adjmatrix[Max][Max];
//   public:
//   Graph(){
//     for(int i =0;i<Max;i++){
//       for(int j =0;j<Max;j++){
//         adjmatrix[i][j]=0;
//       }
//       cout<<endl;
//     }
//   }
//   void insert(int a,int b){
//     adjmatrix[a][b] = 1;
//   }
//   void print(){
//     for(int i =0;i<Max;i++){
//       for(int j =0;j<Max;j++){
//         cout<<adjmatrix[i][j]<<" ";
//       }
//       cout<<endl;
//     }
//   }
// };
// int main(){
//   int a;
//   int b;
//   Graph aditya;
//   // int i,j;
//   // cin>>a;
//   // cin>>b;
//   // i =a;
//   // j = b;
//   while(1){
//     cin>>a;
//     cin>>b;
//     if(a==-1&&b==-1){
//       break;
//     }
//     aditya.insert(a,b);
//   }
//   aditya.print();
// }

                                          // wallshall algorithm
// #include<iostream>
// using namespace std;
// // #define MAX 10;
// class Graph{
//   static const int MAX = 10;
//   int numnodes;
//   int adj[MAX][MAX];
//   public:
//   Graph(int nodes):numnodes(nodes){
//     for(int i =0;i<numnodes;i++){
//       for(int j =0;j<numnodes;j++){
//         adj[i][j]=0;
//       }
//     }
//   }
//   void addedge(int src,int dist){
//     adj[src][dist] = 1;
//   }
//   void warshall(){
//     for(int k = 0;k<numnodes;k++){
//       for(int i =0;i<numnodes;i++){
//         for(int j =0;j<numnodes;j++){
//           adj[i][j] = adj[i][j] || (adj[i][k] && adj[k][i]);
//         }
//       }
//     }
//   }
//   void display(){
//     for(int i =0;i<numnodes;i++){
//       for(int k = 0;k<numnodes;k++){
//         cout<<adj[i][k]<<" ";
//       }
//       cout<<endl;
//     }
//   }

// };
// int main(){
//   Graph aditya(4);
//   aditya.addedge(1,2);
//   aditya.addedge(2,4);
//   aditya.addedge(4,1);
//   aditya.addedge(4,3);
//   aditya.warshall();
//   aditya.display();
// }

                                  //  template
// #include<iostream>
// using namespace std;
// // #include<template>
// // template<class sum>
// // void sum(int arr[],int &sum){
// //   for(int i =0;i<arr.size()/sizeof(int);i++){
// //     sum+=arr[i];
// //       }
      
// // }
// // int main(){
// //   int arr[] = {1,2,3,4,5};
// //   int sum1=0;
// //   sum(arr,sum1);
// // }
// #define MAX 5;
// template<class Type>
// Type sum(Type arr[]){
//   Type total = 0; 
//   for(int i =0;i<MAX;i++){
//     total+=arr[i];
//   }
//   return total;
// }
// template<class Type>
// Type read(Type arr[]){
//   for(int i =0;i<10;i++){
//     cin>>arr[i];
//   }
// }
// int main(){
//   int arr[] = {1,2,3,4,5,6,7,8,9,10};
//   float arr1[] = {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0};
//   // read<int>(arr);
//   cout<<sum<int>(arr)<<endl;
//   cout<<sum<float>(arr1);
// }

// #include<iostream>
// using namespace std;
// template<class Type,class Type1>
// void mul(Type a,Type1 b){
//   cout<<a*b;
// }
// int main(){
//   int a =90;
//   float b = 4.0;
//   mul<int,float>(a,b);
// }

// #include<iostream>
// using namespace std;
// template<class Type>
// void display(Type x){
//   cout<<"Template"<<x<<endl;
// }
// template<class Type,class Type1,class Type2>
// void display(Type a,Type1 b,Type2 c){
//   cout<<"template: "<<a<<" "<<b<<" ";
// }

// void display(int a){
//   cout<<"display: "<<a<<" "<<endl;
// }
// int main(){
//   display(12);
// }

// #include<iostream>
// using namespace std;
// template<class T>
// class abc{
//   public:
//   T a,b,c;
//   abc(T a1,T b1){
//     a = a1;
//     b = b1;
//     // c = c1;
//   }
//   void max(){
//     c = a;
//     a = b;
//     b = c;
//   }
//   void display(){
//     cout<<a<<" "<<b<<" ";
//   }
// };
// int main(){
//   abc<int>obj(10,20);
//   obj.max();
//   obj.display();
//   // cout<<obj.a<<" ";
//   // cout<<obj.b;
//   // cout<<obj.c;
// }


// #include<iostream>
// using namespace std;
// void amit(int b,int c){
//   cout<<"aditya"<<" "<<b<<c;
// }
// int aditya(int a){
//   cout<<"Amit"<<endl;
//   amit(a,90);
// }
// int main(){
//   aditya(12);
// }
// #include<iostream>
// using namespace std;
// template<class type1,class type2,class T>
// class array{
//   T *arr;
//   int size;
//   T sum;
//   public:
//   array(int a){
//     size = a;
//     arr = new T[a];
//   }
//   void read(){
//     for(int i =0;i<size;i++){
//       cin>>arr[i];
//     }
//   }
//   void sum1(){
//     T sum =0;
//     for(int i =0;i<size;i++){
//       sum+=arr[i];
//     }
//   }
// };
// int main(){
  
// }

// #include<iostream>
// using namespace std;
// template<class T>
// class alpha{
//   protected:
//   T a;
//   public:
//   void check(){
//     cout<<"Hello";
//   }
// };
// template<class T,class T1>
// class beta:public alpha<T>{
//   private:
//   T1 b;
//   public:
//   void get(){
//     cin>>alpha<T>::a>>b;
//   }
//   void display(){
//     cout<<"a: "<<alpha<T>::a<<endl;
//     cout<<"b: "<<b<<endl;
//     alpha<T>::check();
//   }
// };
// int main(){
//   beta<int,float>b1;
//   beta<float,int>b2;
//   cout<<"Enter a(int) and b(float)";
//   b1.get();
//   b1.display();
//   cout<<"enter a(float) and b(int)";
//   b2.get();
//   b2.display();
//   return 0;
// }

// #include<iostream>
// using namespace std;
// template<class T,class U = char>
// class A{
//   public:
//   T x;
//   U y;
// };
// int main(){
//   A<char> a;
//   //A<int,int> b;
//   cout<<sizeof(a)<<endl;
// }

// #include<iostream>
// using namespace std;
// template<class T>
// class mypair{
//   T a,b;
//   public:
//   mypair(T first,T second){
//     a = first;
//     b = second;
//   }
//   T getmax();
// };
// template<class T>
// T mypair<T>::getmax(){
//   T retval;
//   retval = a>b?a:b;
//   return retval;
// }
// int main(){
//   mypair<int> myobject(100,75);
//   cout<<myobject.getmax();
//   return 0;
// }

// #include<iostream>
// using namespace std;
// template<class T,int size>
// class A{
//   public:
//   T arr[size];
//   void insert1()
//   {
//     int i = 1;
//     for(int j =0;j<size;j++){
//       arr[j] = i;
//       i++;
//     }
//   }
//   void display(){
//     for(int i =0;i<size;i++){
//       cout<<arr[i]<<" ";
//     }
//   }
// };
// int main(){
//   A<int,10> t1;
//   t1.insert1();
//   t1.display();
//   return 0;
// }

// #include<iostream>
// #include<queue>
// #include<vector>
// using namespace std;
// void bfs(int graph[max][max],int start,int n){
//     vector<bool>visited(n,false);
//     queue<int>q;
// q.push(start);
// visited[start]=true;
// while(!q.empty()){
// int current=q.front();
// q.pop();
// cout<<current<<" ";
// vector<int>neighbor;
// for(int i=0;i<n;i++){
//     if(graph[current][i]==1&& !visited[i]){
//         neighbor.push_back(i);
//     }

// }
// sort(neighbor.begin(),neighbor.end()){
//     for(neighbor:neighbors){
//         q.push(neighbors);
//         visited[neighbors]=true;
//     }
// }

// }
// }






// #include<iostream>
// using namespace std;
// // int main(){
// //     string str;
// //     cin>>str;
// //     cout<<str;
// //     return 0;
// // }
// class Node
// {
//     public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int value)
//     {
//         data=value;
//         left=right=NULL;
//     }
// };
// Node *Create(Node *root,int val)
// {
//     if(root==NULL)
//     {
//         return new Node(val);
//     }
//     if(val<root->data)
//     {
//         root->left=Create(root->left,val);
//     }
//     else if(val>root->data)
//     {
//         root->right=Create(root->right,val);
//     }
//     return root;
// }
// Node *insertLevel(Node *root,int val)
// {
//     if(root==NULL)
//     {
//         return new Node()
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     Node *root=NULL;
//     for(int i=0;i<n;i++)
//     {
//     cin>>arr[i];
//     root=Create(root,arr[i]);
//     }
// }


// #include<iostream>
// #include<queue>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* left;
//     Node *right;
//     Node(int value){
//         data = value;
//         right = nullptr;
//         left = nullptr;
//     }
// };
// Node *create(Node *root,int val){
//     Node *newNode = new Node(val);
//     if(root == nullptr){
//         return newNode;
//     }
//     queue<Node*> que;
//     que.push(root);
//     while(!que.empty()){
//         Node *temp = que.front();
//         que.pop();
//         if(temp->left == nullptr){
//             temp->left = newNode;
//             break;
//         }else{
//             que.push(root->left);
//         }
//         if(temp->right == nullptr){
//             temp->right = newNode;
//             break;
//         }else{
//             que.push(root->right);
//         }
//     }
//     return root;
// }
// Node *create1(Node *root,int val){
//     if(root == nullptr){
//         return new Node(val);
//     }
//     if(val<root->data){
//         root->left = create1(root->left,val);
//     }else{
//         root->right = create1(root->right,val);
//     }
//     return root;
// }
// Node *create2(){
//     int x;
//     cin>>x;
//     if(x == -1){
//         return nullptr;
//     }
//     Node *root = new Node(x);
//     root->left = create2();
//     root->right = create2();
// }
// int main(){

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    
// }




                            // 1.TOWER_OF_HANOI
// #include<iostream>
// #include<queue>
// using namespace std;
// void hanoi(int n,int source,int auxillery,int distination){
//     if(n==1){
//         cout<<"Disk "<<n<<" moves from "<<source<<" to "<<distination<<endl;
//         return;
//     }
//     hanoi(n-1,source,distination,auxillery);
//     cout<<"Disk "<<n<<" moves from "<<source<<" to "<<distination<<endl;
//     hanoi(n-1,auxillery,source,distination);
// }

// void merge(int arr[],int start,int mid,int end){
//     int left = start;
//     int right = mid+1;
//     int index = 0;
//     int num[end-start+1];
//     while(left<=mid && right<=end){
//         if(arr[left]<=arr[right]){
//             num[index++] = arr[left++];
//         }else{
//             num[index++] = arr[right++];
//         }

//     }
//     while(left<=mid){
//         num[index++] = arr[left++];
//     }
//     while(right <= end){
//         num[index++] = arr[right++];
//     }

//     // now insert num array to arr array;
//     index = 0;
//     while(start<=end){
//         arr[start++] = num[index++];
//     }
// }
// void merge_sort(int arr[],int start,int end){
//     if(start>=end){
//         return;
//     }
//     int mid = start + (end - start)/2;
//     merge_sort(arr,start,mid);
//     merge_sort(arr,mid+1,end);

//     merge(arr,start,mid,end);
// }
// void swap(int &a,int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int partition(int arr[],int start,int end){
//     int pivot = arr[end];
//     int pos = start;
//     for(int i =start;i<end;i++){
//         if(arr[i]<=pivot){
//             swap(arr[i],arr[pos]);
//             pos++;
//         }
//     }
//     swap(arr[pos],arr[end]);
//     return pos;
// }
// void quick(int arr[] , int start,int end){
//     if(start>=end){
//         return;
//     }
//     int pivot = partition(arr,start,end);
//     quick(arr,start,pivot-1);
//     quick(arr,pivot+1,end);
// }

// // int main(){
// //     // hanoi(3,1,2,3);
// //     int arr[5] = {0,2,9,1,10};
// //     quick(arr,0,4);
// //     // merge_sort(arr,0,4);
// //     for(int i =0;i<5;i++){
// //         cout<<arr[i]<<" ";
// //     }
// // }

// class Node{
//     public:
//     int data;
//     Node *left,*right;
//     Node(int val){
//         data = val;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// Node *create1(Node *root,int val){
//     Node *newNode = new Node(val);
//     if(root == nullptr){
//         return newNode;
//     }
//     if(val<=root->data){
//         root->left = create1(root->left,val);
//     }else{
//         root->right = create1(root->right,val);
//     }
//     return root;
// }
// Node *create2(Node *root,int val){
//     Node *newNode = new Node(val);
//     if(root == nullptr){
//         return newNode;
//     }
//     queue<Node*> que;
//     que.push(root);
//     while(!que.empty()){
//         Node *temp = que.front();
//         que.pop();
//         if(temp->left == nullptr){
//             temp->left = newNode;
//             break;
//         }else{
//             que.push(temp->left);
//         }
//         if(temp->right == nullptr){
//             temp->right = newNode;
//             break;
//         }else{
//             que.push(temp->right);
//         }
//     }
//     return root;
// }
// void in_order(Node *root){
//     if(root == nullptr){
//         return;
//     }
//     in_order(root->left);
//     cout<<root->data;
//     in_order(root->right);
// }
// int main(){
//     queue<int> q;
//     queue<int> q1;
//     int a,b;
//     while(true){

//     cin>>a;
//         switch(a){
//             case 1:
//             cin>>b;
//             q.push(b);
//             cout<<"enqueued "<<q.front()<<endl;
//             break;
//             case 2:
//              if(!q.empty()){
//             cout<<"dequeued "<<q.front()<<endl;}
//             else{
//                 cout<<"que is empty"<<endl;
//             }
//             q.pop();
//             break;
//             case 3:
//             while(!q.empty()){
//                 if(!q.empty()){

//                 cout<<" "<<q.front()<<" "<<endl;
//                 q1.push(q.front());
//                 q.pop();
//                 }else{
//                     cout<<"que is empty"<<endl;
//                 }
//             }
//             cout<<endl;
//             case 4:
//             exit(1);
//             break;
//             default:
//             cout<<"Invalid input.";
//         }
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int data,prio;
//     int n;
//     while(true)
//     {
//         cin>>data>>prio;
//         n++;
//     }
//     pair<int,int>arr[n];
//     for(int i=0;i<n;i++)
//     {
//         arr[i].first=data;
//         arr[i].second=prio;
//     }
//     sort(arr,arr+n,[](pair<int,int>&a,pair<int,int>&b)
//     {
//         return a.second<b.second;
//     })

// }
// #include<iostream>
// #include<queue>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int val){
//         data = val;
//         left = right = nullptr;
//     }
// };
// void leaf(Node *root){
//     if(root == nullptr){
//         return;
//     }

//     if(root->left == nullptr && root->right == nullptr){
//         cout<<root->data<<" ";
//     }
//     if(root->left != nullptr){
//         leaf(root->left);
//     }
//     if(root->right != nullptr){
//         leaf(root->right);
//     }
// }


// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int value){
//         data = value;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// Node *insert(Node *root,int val){
//     if(root == nullptr){
//         return new Node(val);
//     }
//     if(val>root->data){
//         root->right = insert(root->right,val);
//     }
//     if(val<root->data){
//         root->left= insert(root->left,val);
//     }
//     return root;
// }
// void inorder(Node *root){
//     if(root == nullptr){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// int mian(){
//     int a;
//     cin>>a;
//     int arr[a];
//     for(int i =0;i<a;i++){
//         cin>>arr[i];
//     }
//     Node *root = nullptr;
//     for(int i =0;i<a;i++){
//         root = insert(root,arr[i]);
//     }
//     inorder(root);
//     return 0;
// }






















// #include<iostream>
// using namespace std;
// class Node{
// public:
// int data;
// Node *ref;
// Node(int value){
//   data = value;
// }
// };
// int main(){
//   Node *Head;
//   Head = NULL;
//   Node *temp;
//   temp = NULL;
//   int arr[]={2,3,4,2,3};
//   for(int i =0;i<5;i++){
//     if(Head == NULL){
//       Head = new Node(arr[i]);
//       Head->ref = NULL;
//       temp = Head;
//     }else{
//     //   temp->ref = new Node(arr[i]);
//     //   temp = temp->ref;
//       Node *temp;
//       temp = Head;
//       while(temp->ref != NULL){ // Corrected line: Check if temp->ref is not NULL
//         temp = temp->ref;
//       }
//       Node *tail;
//       tail = new Node(arr[i]);
//       temp->ref = tail;
//     }
//   }
//   Node *alpha;
//   alpha = Head;
//   while(alpha->ref!=NULL){
//     cout<<alpha->data<<" ";
//     alpha = alpha->ref;
//   }
// }
// int main()
// {
//   cout<<"llo";
// }



                                        //    STACK -> ARRAY
// #include<iostream>
// using namespace std;
// class Stack{
//   int size;
//   int top;
//   int front;
//   int *stac;
//   public:
//   Stack(int a){
//     size = a;
//     top = -1;
//     front = -1;
//     stac = new int[a];
//   }
//   ~Stack(){
//     delete [] stac;
//   }
//   void push(int val){
//     // top++;
//     if(top == size-1){
//       cout<<"Stack Overflow."<<endl;
//       return;
//     }else{
//       stac[++top] = val;
//       cout<<"Pushed -> "<<stac[top]<<endl;
//     }
//   }
//   void pop(){
//     if(top == -1){
//       cout<<"Stack underflow."<<endl;
//     }
//     else{
//       cout<<"poped -> "<<stac[top]<<endl;
//       top--;
//     }
//   }
//   void last(){
//     if(top == -1){
//       cout<<"Stack is empty."<<endl;
//     }else{
//       cout<<"at top is -> "<<stac[top]<<endl;
//     }
//   }
//   void size1(){
//     cout<<"size of stack -> "<<top+1<<endl;
//   }
// };
// int main(){
//   int a;
//   cout<<"size of stack: ";
//   cin>>a;
//   Stack obj1(a);
//   // obj1.push(90);
//   // obj1.push(85);
//   // obj1.push(56);
//   // obj1.push(56);
//   // obj1.push(12);
//   // obj1.push(00);
//   // obj1.push(55);
//     obj1.last();
//     obj1.pop();
//     obj1.pop();
//     obj1.pop(); // Test underflow
//     obj1.size1(); // Display the size of the stack

//     return 0;
// }
     


                                            //  LINKED LIST
// #include<iostream>
// using namespace std;
// bool isempty();
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int val){
//         data = val;
//         next = nullptr;
//     }
// };
// class Stack{
//     Node *top;
//     public:
//     Stack(){
//         top = nullptr;
//     }
//     ~Stack(){
//         while(!isempty()){
//             pop();
//         }
//     }
//     void push(int val){
//         Node *newNode = new Node(val);
//         newNode->next = top;
//         top = newNode;
//         cout<<"pushed "<<top->data<<endl;
//     }
//     void pop(){
//         if(isempty()){
//             cout<<"stack underflow."<<endl;
//             return;
//         }
//         Node *temp = top;
//         cout<<top->data<<" is poped."<<endl;
//         top = top->next;
//         delete temp;
//     }
//     void peek(){
//         if(isempty()){
//             cout<<"Stack is empty."<<endl;
//             return;
//         }
//         cout<<"at top "<<top->data<<endl;
//     }
//     bool isempty(){
//         return top == nullptr;
//     }
//     void size(){
//         Node *alpha = top;
//         int count = 0;
//         while(alpha){
//             count++;
//             alpha = alpha->next;
//         }
//         cout<<"size is "<<count<<endl;
//     }
// };
// int main(){
//     Stack obj1;
//     obj1.push(90);
//     obj1.size();
//     obj1.push(23);
//     obj1.push(3);
//     obj1.push(2);
//     obj1.pop();
//     obj1.peek();

//     return 0;
// }


                                            //  pushing the greatest number first using array in stack
// #include<iostream>
// using namespace std;
// class stack{
//     int size;
//     int top;
//     int *stk;
//     public:
//     stack(int a){
//         size = a;
//         top = -1;
//         stk = new int[a];
//     }
 

        //  distructor
        // ~stack(){
        //     delete [] stk;
        // }
//     // to insert into stack
//     void push(int val){
//         if(top == size-1){
//             cout<<"Stack overflow."<<endl;
//             return;
//         }
//         stk[++top] = val;
//         cout<<stk[top]<<" is pushed into stack."<<endl;
//     }

//     // to delete element
//     void pop(){
//         if(top == -1){
//             cout<<"stack underflow."<<endl;
//             return;
//         }
//         cout<<stk[top]<<" is poped from stack."<<endl;
//         top--;
//     }


//     // to know number of elements in stack
//     void length(){
//         cout<<"size is "<<top+1<<"."<<endl;
//     }
// };
// int max(int arr[],int a){
//     int max = arr[0];
//     int j =0;
//     for(int i =0;i<a;i++){
//         if(max<arr[i]){
//             max = arr[i];
//             j = i;
//         }
//     }
//     arr[j] = 0;
//     return max;
// }
// int main(){
//     int a;
//     cin>>a;
//     int stac[a];
//     for(int i =0;i<a;i++){
//         cin>>stac[i];
//     }
//     // cout<<max(stac,a);
//     // for(int i =0;i<a;i++){
//     //     cout<<stac[i]<<" ";
//     // }
//     // cout<<endl;
//     int i =0;
//     stack stak(a);
//     while(i<a){
//         stak.push(max(stac,a));
//         i++;
//     }
// }




// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int a){
//         data = a;
//         next = nullptr;
//     }
// };
// bool isempty();
// class stack{
//     Node *top;
//     int size;
//     public:
//     stack(){
//         top = nullptr;
//         size = 0;
//     }

//     ~stack(){
//         while(!isempty()){
//             pop();
//         }
//     }

//             // to insert
//     void push(int val){
//         Node *temp = new Node(val);
//         temp->next = top;
//         top = temp;
//         size++;
//     }
//             // to delete
//     int pop(){
//         if(isempty()){
//             cout<<"stack is underflow."<<endl;
//             return 0;
//         }
//         Node *temp = top;
//         top = top->next;
//         return temp->data;
//         // delete temp;
//         // cout<<"pop"<<endl;
//     }
//             // to size
//     void length(){
//         if(isempty()){
//             cout<<"stack is empty."<<endl;
//             return;
//         }
//         cout<<"size is "<<size;
//     }
//             // to empty
//     bool isempty(){
//         return top == nullptr;
//     }
// };
// int main(){
//     stack alpha;
//     alpha.push(12);
//     alpha.push(9);
//     alpha.push(98);
//     alpha.push(90);
//     alpha.push(89);
//     stack beeta;
//     {int a = alpha.pop();
//     beeta.push(a);
//     beeta.length();}
//     {int a = alpha.pop();
//     beeta.push(a);
//     beeta.length();}
//     {int a = alpha.pop();
//     beeta.push(a);
//     beeta.length();}
//     {int a = alpha.pop();
//     beeta.push(a);
//     beeta.length();}
//     alpha.length();
// }


// #include<iostream>
// using namespace std;
// #include<stack>

// // int main(){
// //     stack<int> a;
// //     int a1;
// //     while(true){
// //         cin>>a1;
// //         if(a1==-1){
// //             break;
// //         }
// //         a.push(a1);
// //     }
// //     stack<int> b;
// //     while(!a.empty()){
// //         b.push(a.top());
// //         a.pop();
// //     }
// //     a.push(234567);
// //     while(!b.empty()){
// //         a.push(b.top());
// //         b.pop();
// //     }
// //     while(!a.empty()){
// //         cout<<a.top()<<endl;
// //         a.pop();
// //     }
// //     // cout<<"size of a: "<<a.size()<<endl;
// //     // cout<<b.size();
// // }
               
                         
//                         //  pair int same using stack
// // int main(){
// //     int a;
// //     cin>>a;
// //     int arr[a];
// //     for(int i =0;i<a;i++){
// //         cin>>arr[i];
// //     }
// //     stack<int> stk;
// //     for(int i =0;i<a;i++){
// //         if(stk.empty()){
// //             stk.push(arr[i]);
// //         }else if(arr[i]>=0){
// //             if(stk.top()>=0){
// //                 stk.push(arr[i]);
// //             }else{
// //                 stk.pop();
// //             }
// //         }else{
// //             if(stk.top()<0){
// //                 stk.push(arr[i]);
// //             }else{
// //                 stk.pop();
// //             }
// //         }
// //     }
// //     while(!stk.empty()){
// //         cout<<stk.top()<<endl;
// //         stk.pop();
// //     }
// // }

// int main(){
//     int a;
//     cin>>a;
//     string arr[a];
//     for(int i =0;i<a;i++){
//         cin>>arr[i];
//     }
//     stack<string> stk;
//     for(int i = 0;i<a;i++){
//         if(stk.empty()){
//             stk.push(arr[i]);
//         }else if(arr[i] == stk.top()){
//             stk.pop();
//         }else{
//             stk.push(arr[i]);
//         }
//     }
//     cout<<stk.size();
// }

                                //    Queue through array
// #include<iostream>
// using namespace std;
// class queue{
//     public:
//     int front;
//     int rear;
//     int *que;
//     int size;
//     queue(int x){
//         front = rear = -1;
//         que = new int[x];
//         size = x;
//     }

//     //  empty
//     bool isempty(){
//         return front == -1;
//     }
//     // full
//     bool isfull(){
//         return rear == size -1;
//     }
//     // push
//     void push(int x){
//         if(isempty()){
//             rear = front = 0;
//             que[rear] = x;
//             return;
//         }
//         else if(isfull() || front > rear){
//             cout<<"queue is full."<<endl;
//             return;
//         }
//         else{
//             cout<<"push: "<<que[rear]<<endl;
//             que[++rear] = x;
//             return;
//         }
//     }
//     // pop
//     void pop(){
//         if(isempty()){
//             cout<<"queue is empty."<<endl;
//             return;
//         }
//         else{
//             cout<<"pop: "<<que[rear]<<endl;
//             ++front;
//             return;

//         }
//     }

//     // existing elements;
//     int count(){
//         return rear-front+1;
//     }

//     // front
//     int initial(){
//         return que[front];
//     }
// };
// int main(){
//     int size = 5;
//     queue alpha(size);
//     alpha.push(12);
//     alpha.push(2);
//     alpha.push(1);
//     alpha.push(9);
//     alpha.push(9);
//     alpha.push(9);
//     alpha.pop();
//     cout<<"front: "<<alpha.initial()<<endl;
//     cout<<"no of elements: "<<alpha.count()<<endl;
// }

                                        // queue using linked list concept
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int val){
//         data = val;
//         next = nullptr;
//     }

// };
// class queue{
//     public:
//     int i;
//     Node *front;
//     Node *rear;
//     queue(){
//         i =0;
//         front = nullptr;
//         rear = nullptr;
//     }
//     // empty
//     bool isempty(){
//         return front == nullptr;
//     }
//     // // full
//     // bool isfull(){
//     //     return rear->next = nullptr;
//     // }
//     // push
//     void push(int val){
//         Node *temp = new Node(val);
//         temp->next = nullptr;
//         if(isempty()){
//             rear = front = temp;
//             // return;
//         }
//         else{
//             rear->next = temp;
//             rear = temp;
//         }

//         i++;
//     }
//     // pop
//     void pop(){
//         if(isempty()){
//             cout<<"queue is empty."<<endl;
//             return;
//         }
//         Node *t = front;
//         front = front->next;
//         delete t;
//         if(front == nullptr){
//             rear = nullptr;
//         }
//     }
//     // front
//     int initial(){
//         return front->data;
//     }
//     // size
//     int size(){
//         return i;
//     }
// };
// int main(){
//     queue alpha;
//     alpha.push(1);
//     alpha.push(12);
//     alpha.push(14);
//     // alpha.pop();
//     alpha.pop();
//     cout<<"front: "<<alpha.initial()<<endl;
//     cout<<"size: "<<alpha.size()<<endl;
// }

// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     queue<int> que;
    // que.push(12);
    // // que.push(12);
    // // que.push(12);
    // que.push(1);
    // que.push(1);
    // que.push(1);
    // que.push(1);
    // que.push(1);
    // cout<<que.empty();
    // que.pop();
    // cout<<que.front();
// }


// Q -> print all element of que
// Q -> reverse first k element from que
                                            // BINARY __TREE 
// #include<iostream>
// #include<queue>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *left,*right;
//     Node(int val){
//         data = val;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// Node* binary_tree(){
//     int x;
//     cin>>x;
//     if(x == -1){
//         return nullptr;
//     }
//     Node *temp = new Node(x);
//     cout<<"enter left child of "<<x<<": ";
//     temp->left = binary_tree();
//     cout<<"enter right child of "<<x<<": ";
//     temp->right = binary_tree();
//     return temp;
// }
// void pre_order(Node *root){
//     if(root==nullptr){
//         return;
//     }
//     cout<<root->data<<" ";
//     pre_order(root->left);
//     pre_order(root->right);
// }
// int main(){
    // int x;
    // cout<<"enter vale of root: ";
    // cin>>x;
    // queue<Node *> que;
    // Node *root = new Node(x);
    // que.push(root);
    // int first;
    // int second;
    // while(!que.empty()){
    //     Node *temp = que.front();
    //     que.pop();
    //     cout<<"Enter the left child of "<<": ";
    //     cin>>first;
    //     if(first!=-1){
    //         temp->left = new Node(first);
    //         que.push(temp->left);
    //     }
    //     cout<<"enter the right child of "": ";
    //     cin>>second;
    //     if(second!=-1){
    //         temp->right = new Node(second);
    //         que.push(temp->right);
    //     }
    // }
//     cout<<"enter root: ";
//     Node *root = binary_tree();
//     // cout<<root->data;
//     pre_order(root);
//     return 0;
// }

// #include<iostream>
// #include<queue>
// using namespace std;
// class Node {
//     public:
//     int data;
//     Node *left, *right;
//     Node(int val){
//         data = val;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// Node* binary_tree(){
//     int x;
//     cin>>x;
//     if(x == -1){
//         return nullptr;
//     }
//     Node* temp = new Node(x);
//     temp->left = binary_tree();
//     temp->right = binary_tree();
//     }

// void pre_order(Node *root){
//     if(root == nullptr){
//         return;
//     }
//     cout<<"pre order: ";
//     cout<<root->data<<" ";
//     pre_order(root->left);
//     pre_order(root->right);
// }

// // in order
// void in_order(Node *root){
//     if(root == nullptr){
//         return;
//     }
//     cout<<"in order: ";

//     in_order(root->left);
//     cout<<root->data<<" ";
//     in_order(root->right);
// }

// // post order
// void post_order(Node *root){
//     if(root == nullptr){
//         return;
//     }
//     cout<<"post order: ";
//     post_order(root->left);
//     post_order(root->right);
//     cout<<root->data<<" ";
// }
// int main(){
//     Node *root  = binary_tree();
//     post_order(root);
// }


                                //  TOWER OF HANOI;
// #include<iostream>
// using namespace std;
// void tower_of_hanoi(int n,int source,int auxillery,int distination){
//     if(n==1){
//         cout<<"disk 1 moves from "<<source<<" to "<<distination;
//         cout<<endl;
//         return;
//     }
//     tower_of_hanoi(n-1,source,distination,auxillery);
//     cout<<"disk "<<n<<" moves from "<<source<<" to "<<distination;
//     cout<<endl;
//     tower_of_hanoi(n-1,auxillery,source,distination);
// }
// int main(){
//     int a;
//     cin>>a;
//     tower_of_hanoi(a,1,2,3);
// }


                                //   MERGE SORT
    
// #include<iostream>
// using namespace std;
// void merge(int arr[],int start , int mid, int end){
//     int left = start;
//     int right = mid+1;
//     int index = 0;
//     int num[end - start +1];
//     while(left<=mid && right<=end){
//         if(arr[left]<=arr[right]){
//             num[index++] = arr[left++];
//         }
//         else{
//             num[index++] = arr[right++];
//         }
//     }

//     // remaning elements
//     while(left<=mid){
//         num[index++] = arr[left++];
//     }
//     while(right<=end){
//         num[index++] = arr[right++];
//     }
    
//     // now implement on original array
//     index = 0;
//     while(start <= end){
//         arr[start++] = num[index++];
//     }
// }
// void mergesort(int arr[], int start , int end){
//     if(start >= end){
//         return;
//     }
//     int mid = start+(end - start)/2;
//     // devide first half
//     mergesort(arr,start, mid);
//     // devide second half
//     mergesort(arr,mid+1,end);
//     // merge these
//     merge(arr,start,mid,end);
// }
// int main(){
//     int a;
//     cin>>a;
//     int arr[a];
//     for(int i =0;i<a;i++){
//         cin>>arr[i];
//     }
//     mergesort(arr,0,a-1);
//     cout<<"Merge sort: ";
//     for(int i =0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }
// }

                            //    QUICK SORT
            
// #include<iostream>
// using namespace std;
// void swap(int &a , int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int partition(int arr[],int start,int end){
//     int pivot = arr[end];
//     int pos = start;
//     for(int i =start ;i<end;i++){
//         if(arr[i]<=pivot){
//             swap(arr[i],arr[pos]);
//             pos++;
//         }
//     }
//     swap(arr[pos],arr[end]);
//     return pos;
// }
// void quicksort(int arr[] , int start , int end){
//     if(start>=end){
//         return;
//     }
//     int pivot = partition(arr,start , end);
//     quicksort(arr,start,pivot-1);
//     quicksort(arr,pivot+1,end);
// }
// int main(){
//     int a;
//     cin>>a;
//     int arr[a];
//     for(int i =0;i<a;i++){
//         cin>>arr[i];
//     }
//     quicksort(arr,0,a-1);
//     cout<<"quick sort: ";
//     for(int i =0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }


// tower of hanoi code :->
// #include<iostream>
// using namespace std;
// void tower_of_hanoi(int n,int source, int auxillary,int distination){
//     if(n==1){
//         cout<<"disk "<<n<<" moves from "<<source<<" to "<<distination;
//         cout<<endl;
//         return;
//     }
//     tower_of_hanoi(n-1,source,distination,auxillary);
//     cout<<"disk "<<n <<" moves from "<<source<<" to "<<distination;
//     cout<<endl;
//     tower_of_hanoi(n-1,auxillary,source,distination);
// }
//  int main(){
//     int a;
//     cin>>a;
//     tower_of_hanoi(a,1,2,3);
//  }

// merge sort :->
// #include<iostream>
// using namespace std;
// void merge(int arr[],int start,int mid, int end){
//     int left = start;
//     int right = mid+1;
//     int index = 0;
//     int num[end-start+1];
//     while(left<=mid && right<=end){
//         if(arr[left]<=arr[right]){                                                    //
//             num[index++] = arr[left++];
//         }
//         else{
//             num[index++] = arr[right++];
//         }
//     }
//     while(left<=mid){
//         num[index++] = arr[left++];
//     }
//     while(right<=end){
//         num[index++] = arr[right++];
//     }

//     // put all element in array
//     index = 0;
//     while(start <= end){
//         arr[start++] = num[index++];
//     }
// }
// void mergesort(int arr[],int start, int end){
//     if(start>=end){
//         return;
//     }
//     int mid = start + (end - start)/2;
//     mergesort(arr,start,mid);
//     mergesort(arr,mid+1,end);
//     // merge all 
//     merge(arr,start,mid,end);
// }
// int main(){
//     int a;
//     cin>>a;
//     int arr[a];
//     for(int i =0;i<a;i++){
//         cin>>arr[i];
//     }
//     mergesort(arr,0,a-1);
//     cout<<"merge sort: ";
//     for(int i =0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// Quick sort :->
// #include<iostream>
// using namespace std;
// void swap(int &a,int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int partition(int arr[] ,int start ,int end){
//     int index = start;
//     int pivot = arr[end];
//     for(int i =start;i<end;i++){
//         if(arr[i]<pivot){
//             swap(arr[i] , arr[index++]);
//         }
//     }
//     swap(arr[end],arr[index]);
//     return index;
// }
// void quick(int arr[],int start ,int end){
//     if(start>=end){
//         return;
//     }
//     int pivot = partition(arr,start,end);
//     quick(arr,start,pivot-1);
//     quick(arr,pivot+1,end);
// }
// int main(){
//     int a;
//     cin>>a;
//     int arr[a];
//     for(int i =0;i<a;i++){
//         cin>>arr[i];
//     }
//     quick(arr,0,a-1);
//     cout<<"quick: ";
//     for(int i =0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *left,*right;
//     Node(int val){
//         data = val;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// Node* Binary_tree(){
//     int x;
//     cin>>x;
//     if(x == -1){
//         return nullptr;
//     }
//     Node *temp = new Node(x);
//     cout<<"enter left child of "<<x<<": ";
//     temp->left = Binary_tree();
//     cout<<"enter right child of "<<x<<": ";
//     temp->right = Binary_tree();
//     return temp;
// }
// void pre_order(Node *root){
//     if(root == nullptr){
//         return;
//     }
//     cout<<root->data<<" ";
//     pre_order(root->left);
//     pre_order(root->right);
// }
// int main(){
//     cout<<"enter root: ";
//     Node *root = Binary_tree();
//     pre_order(root);
// }

                                //    BINARY SEARCH TREE
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *left,*right;
//     Node(int val){
//         data = val;
//         left = right = nullptr;
//     }
// };
// Node *binary_search_tree(Node *root){
//     int val;
//     cin>>val;
//     if(val == -1){
//         return nullptr;
//     }
//     if(root == nullptr){
//         return new Node(val);
        
//     }

//     if(val<root->data){
//         // cout<<"on left. "<<endl;
//         root->left = binary_search_tree(root->left);
//     }else{
//         // cout<<"on right. "<<endl;
//         root->right = binary_search_tree(root->right);
//     }
//     return root;
// }

// int main(){
//     // int a;
//     // cin>>a;
//     Node *root;
//     root = binary_search_tree(root);
// }

// #include<iostream>
// using namespace std;
// void swap(int &a,int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main(){
//     int a,b;
//     cout<<"enter no: ";
//     cin>>a>>b;
//     int arr1[50];
//     int arr2[50];
//     int i =0;
//     arr1[i] = a;
//     arr2[i++] = b;
//     char c;
//     cout<<"enter char: ";
//     cin>>c;
//     while(c!='n' && c!='N'){
//         cout<<"enter no. ";
//         cin>>a>>b;
//         arr1[i] = a;
//         arr2[i++] = b;
//         cout<<"enter char: ";       
//         cin>>c;
//     }
//     for(int m = 0;m<i;m++){
//         for(int j = 0;j<i;j++){
//             if(arr2[m]<=arr2[j]){
//                 swap(arr2[m],arr2[j]);
//                 swap(arr1[m],arr1[j]);
//             }
//         }
//     }
//     for(int m = 0;m <i;m++){
//         cout<<arr1[m]<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
    
// }
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *left,*right;
//     Node(int val):data(val),left(nullptr),right(nullptr){}
// };
// Node* Binary_tree(Node *root,int n){
//     if(root == nullptr){
//         return new Node(n);
//     }
//     if(n<root->data){
//         root->left = Binary_tree(root,n);
//     }
//     else{
//         root->right = Binary_tree(root,n);
//     }
//     return root;
// }
// void in_order(Node *root){
//     if(root == nullptr){
//         return;
//     }
//     in_order(root->left);
//     cout<<root->data<<" ";
//     in_order(root->right);
// }
// int main(){
//    int n;
// //    cin>>n;
   
//    Node *root = nullptr;
//    while(cin>>n&&n!=-1){
//     root = Binary_tree(root,n);
    
//    }
//    if (root == nullptr) {
//         cout << "No nodes to create the tree" << endl;
//     } else {
//    in_order(root);}
//    return 0;
// }
// #include<iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node *left, *right;

//     Node(int val) : data(val), left(nullptr), right(nullptr) {}
// };

// // Function to insert a value into the binary search tree
// Node* Binary_tree(Node *root, int n) {
//     if (root == nullptr) {
//         return new Node(n);
//     }
//     if (n < root->data) {
//         root->left = Binary_tree(root->left, n);
//     } else {
//         root->right = Binary_tree(root->right, n);
//     }
//     return root;
// }

// // Function for in-order traversal
// void in_order(Node *root) {
//     if (root == nullptr) {
//         return;  // Base case: no node to process
//     }
//     in_order(root->left);  // Visit left subtree
//     cout << root->data << " ";  // Print current node
//     in_order(root->right);  // Visit right subtree
// }

// int main() {
//     Node *root = nullptr;
//     int n;
    
//     // Input processing: keep inserting nodes until -1 is encountered
//     while (cin >> n && n >=0) {
//         root = Binary_tree(root, n);  // Insert each value into the tree
//     }

//     // If the tree is empty, print a message
//     if (root == nullptr) {
//         cout << "No nodes to create the tree" << endl;
//     } else {
//         // Perform in-order traversal and print node values
//         in_order(root);
//         cout << endl;  // End line after traversal
//     }

//     return 0;
// }


//                             waste try
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *left,*right;
//     Node(int val):data(val),left(nullptr),right(nullptr){}
// };
// Node* Binary_tree(Node *root,int n){
//     if(root == nullptr){
//         return new Node(n);
//     }
//     if(n<root->data){
//         root->left = Binary_tree(root,n);
//     }
//     else{
//         root->right = Binary_tree(root,n);
//     }
//     return root;
// }
// void in_order(Node *root){
//     if(root == nullptr){
//         return;
//     }
//     in_order(root->left);
//     cout<<root->data<<" ";
//     in_order(root->right);
// }
// int main(){
//   int n;
// //    cin>>n;
   
//   Node *root = nullptr;
// //   int arr
//   if (root == nullptr) {
//         cout << "No nodes to create the tree" << endl;
//     } else {
//   in_order(root);}
//   return 0;
// }
// #include<iostream>
// #include<queue>

// using namespace std;

// class Node {
// public:
//     int data;
//     Node *left, *right;

//     Node(int val) : data(val), left(nullptr), right(nullptr) {}
// };

// // Function to insert a value into the binary search tree
// Node* Binary_tree(Node *root, int n) {
//     if (root == nullptr) {
//         return new Node(n);
//     }
//     if (n < root->data) {
//         root->left = Binary_tree(root->left, n);
//     } else {
//         root->right = Binary_tree(root->right, n);
//     }
//     return root;
// }

// // Function for in-order traversal
// void in_order(Node *root) {
//     if (root == nullptr) {
//         return;  // Base case: no node to process
//     }
//     in_order(root->left);  // Visit left subtree
//     cout << root->data << " ";  // Print current node
//     in_order(root->right);  // Visit right subtree
// }
// void level_order(Node *root) {
//     if (root == nullptr) {
//         return; // If the tree is empty, return
//     }

//     queue<Node*> q;  // Create a queue to store nodes
//     q.push(root);    // Start with the root node

//     while (!q.empty()) {
//         Node* current = q.front(); // Get the node at the front of the queue
//         q.pop();                   // Remove the node from the queue

//         cout << current->data << " "; // Print the current node's data

//         // Add left and right children to the queue
//         if (current->left != nullptr) {
//             q.push(current->left);
//         }
//         if (current->right != nullptr) {
//             q.push(current->right);
//         }
//     }
// }

// int main() {
//     Node *root = nullptr;
//     int n;
    
//     // Input processing: keep inserting nodes until -1 is encountered
//     while (cin >> n && n >=0) {
//         root = Binary_tree(root, n);  // Insert each value into the tree
//     }

//     // If the tree is empty, print a message
//     if (root == nullptr) {
//         cout << "No nodes to create the tree" << endl;
//     } else {
//         // Perform in-order traversal and print node values
//         level_order(root);
//         cout << endl;  // End line after traversal
//     }

//     return 0;
// }

// #include<iostream>
// #include<queue>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *left,*right;
//     Node(int val){
//         data = val;
//         this->left = nullptr;
//         this->right = nullptr;
//     }
// };
// Node *create1(Node *root,int val){
//     if(root == nullptr){
//         return new Node(val);
//     }
//     if(val<root->data){
//         root->left = create1(root->left,val);
//     }
//     else{
//         root->right = create1(root->right,val);
//     }
//     return root;
// }
// void in_order(Node *root){
//     if(root == nullptr){
//         return;
//     }
//     in_order(root->left);
//     cout<<root->data<<" ";
//     in_order(root->right);
// }

// Node *create2(Node *root,int val){
//     Node *newNode = new Node(val);
//     if(root == nullptr){
//         return newNode;
//     }
//     queue<Node*> que;
//     que.push(root);
//     while(!que.empty()){
//         Node *temp = que.front();
//         que.pop();
//         if(temp->left == nullptr){
//             temp->left = newNode;
//             break;
//         }else{
//             que.push(temp->left);
//         }
//         if(temp->right == nullptr){
//             temp->right = newNode;
//             break;
//         }else{
//             que.push(temp->right);
//         }
//     }
//     return root;
// }
// void child(queue<int> &q,Node *root){
//     if(root == nullptr){
//         return;
//     }
//     if(root->left ==nullptr && root->right == nullptr){
//         q.push(root->data);
//     }
//     if(root->left != nullptr){
//         child(q,root->left);
//     }
//     if(root->right != nullptr){
//         child(q,root->right);
//     }
// }
// int main(){
//     int a;
//     cin>>a;
//     int arr[a];
//     Node *root = nullptr;
//     for(int i = 0;i<a;i++){
//         cin>>arr[i];
//         root = create1(root,arr[i]);
//     }
//     // in_order(root);
//     queue<int> que;
//     child(que,root);
//     int sum =0;
//     while(!que.empty()){
//         sum += que.front();
//         cout<<que.front()<<" ";
//         que.pop();
//     }
//     cout<<endl;
//     cout<<sum;
// }

                                        //    CREATION CODE
// #include<iostream>
// #include<queue>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* left;
//     Node *right;
//     Node(int value){
//         data = value;
//         right = nullptr;
//         left = nullptr;
//     }
// };
// Node *create(Node *root,int val){
//     Node *newNode = new Node(val);
//     if(root == nullptr){
//         return newNode;
//     }
//     queue<Node*> que;
//     que.push(root);
//     while(!que.empty()){
//         Node *temp = que.front();
//         que.pop();
//         if(temp->left == nullptr){
//             temp->left = newNode;
//             break;
//         }else{
//             que.push(root->left);
//         }
//         if(temp->right == nullptr){
//             temp->right = newNode;
//             break;
//         }else{
//             que.push(root->right);
//         }
//     }
//     return root;
// }
// Node *create1(Node *root,int val){
//     if(root == nullptr){
//         return new Node(val);
//     }
//     if(val<root->data){
//         root->left = create1(root->left,val);
//     }else{
//         root->right = create1(root->right,val);
//     }
//     return root;
// }
// Node *create2(){
//     int x;
//     cin>>x;
//     if(x == -1){
//         return nullptr;
//     }
//     Node *root = new Node(x);
//     root->left = create2();
//     root->right = create2();
// }
// int main(){

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    
// }
                                    //      PRACRICE :->
                            // 1.TOWER_OF_HANOI
// #include<iostream>
// #include<queue>
// using namespace std;
// void hanoi(int n,int source,int auxillery,int distination){
//     if(n==1){
//         cout<<"Disk "<<n<<" moves from "<<source<<" to "<<distination<<endl;
//         return;
//     }
//     hanoi(n-1,source,distination,auxillery);
//     cout<<"Disk "<<n<<" moves from "<<source<<" to "<<distination<<endl;
//     hanoi(n-1,auxillery,source,distination);
// }

// void merge(int arr[],int start,int mid,int end){
//     int left = start;
//     int right = mid+1;
//     int index = 0;
//     int num[end-start+1];
//     while(left<=mid && right<=end){
//         if(arr[left]<=arr[right]){
//             num[index++] = arr[left++];
//         }else{
//             num[index++] = arr[right++];
//         }

//     }
//     while(left<=mid){
//         num[index++] = arr[left++];
//     }
//     while(right <= end){
//         num[index++] = arr[right++];
//     }

//     // now insert num array to arr array;
//     index = 0;
//     while(start<=end){
//         arr[start++] = num[index++];
//     }
// }
// void merge_sort(int arr[],int start,int end){
//     if(start>=end){
//         return;
//     }
//     int mid = start + (end - start)/2;
//     merge_sort(arr,start,mid);
//     merge_sort(arr,mid+1,end);

//     merge(arr,start,mid,end);
// }
// void swap(int &a,int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int partition(int arr[],int start,int end){
//     int pivot = arr[end];
//     int pos = start;
//     for(int i =start;i<end;i++){
//         if(arr[i]<=pivot){
//             swap(arr[i],arr[pos]);
//             pos++;
//         }
//     }
//     swap(arr[pos],arr[end]);
//     return pos;
// }
// void quick(int arr[] , int start,int end){
//     if(start>=end){
//         return;
//     }
//     int pivot = partition(arr,start,end);
//     quick(arr,start,pivot-1);
//     quick(arr,pivot+1,end);
// }

// // int main(){
// //     // hanoi(3,1,2,3);
// //     int arr[5] = {0,2,9,1,10};
// //     quick(arr,0,4);
// //     // merge_sort(arr,0,4);
// //     for(int i =0;i<5;i++){
// //         cout<<arr[i]<<" ";
// //     }
// // }

// class Node{
//     public:
//     int data;
//     Node *left,*right;
//     Node(int val){
//         data = val;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// Node *create1(Node *root,int val){
//     Node *newNode = new Node(val);
//     if(root == nullptr){
//         return newNode;
//     }
//     if(val<=root->data){
//         root->left = create1(root->left,val);
//     }else{
//         root->right = create1(root->right,val);
//     }
//     return root;
// }
// Node *create2(Node *root,int val){
//     Node *newNode = new Node(val);
//     if(root == nullptr){
//         return newNode;
//     }
//     queue<Node*> que;
//     que.push(root);
//     while(!que.empty()){
//         Node *temp = que.front();
//         que.pop();
//         if(temp->left == nullptr){
//             temp->left = newNode;
//             break;
//         }else{
//             que.push(temp->left);
//         }
//         if(temp->right == nullptr){
//             temp->right = newNode;
//             break;
//         }else{
//             que.push(temp->right);
//         }
//     }
//     return root;
// }
// void in_order(Node *root){
//     if(root == nullptr){
//         return;
//     }
//     in_order(root->left);
//     cout<<root->data;
//     in_order(root->right);
// }
// int main(){
//     queue<int> q;
//     queue<int> q1;
//     int a,b;
//     while(true){

//     cin>>a;
//         switch(a){
//             case 1:
//             cin>>b;
//             q.push(b);
//             cout<<"enqueued "<<q.front()<<endl;
//             break;
//             case 2:
//              if(!q.empty()){
//             cout<<"dequeued "<<q.front()<<endl;}
//             else{
//                 cout<<"que is empty"<<endl;
//             }
//             q.pop();
//             break;
//             case 3:
//             while(!q.empty()){
//                 if(!q.empty()){

//                 cout<<" "<<q.front()<<" "<<endl;
//                 q1.push(q.front());
//                 q.pop();
//                 }else{
//                     cout<<"que is empty"<<endl;
//                 }
//             }
//             cout<<endl;
//             case 4:
//             exit(1);
//             break;
//             default:
//             cout<<"Invalid input.";
//         }
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int data,prio;
//     int n;
//     while(true)
//     {
//         cin>>data>>prio;
//         n++;
//     }
//     pair<int,int>arr[n];
//     for(int i=0;i<n;i++)
//     {
//         arr[i].first=data;
//         arr[i].second=prio;
//     }
//     sort(arr,arr+n,[](pair<int,int>&a,pair<int,int>&b)
//     {
//         return a.second<b.second;
//     })

// }
// #include<iostream>
// #include<queue>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int val){
//         data = val;
//         left = right = nullptr;
//     }
// };
// void leaf(Node *root){
//     if(root == nullptr){
//         return;
//     }

//     if(root->left == nullptr && root->right == nullptr){
//         cout<<root->data<<" ";
//     }
//     if(root->left != nullptr){
//         leaf(root->left);
//     }
//     if(root->right != nullptr){
//         leaf(root->right);
//     }
// }
// tower of haoi
// void hanoi(int n,int source,int auxillery,int distination){
//     if(n == 1){
//         cout<<"Disk 1 moves from "<<source<<" to "<<distination<<endl; 
//     }
//     hanoi(n,source,distination,auxillery);
//     cout<<"Disk "<<n<<" moves from "<<source<<" to "<<distination<<endl;
//     hanoi(n-1,auxillery,source,distination);
// }
// void merge_sort(int arr[],int start,int mid,int end){
//     int left = start;
//     int right = mid +1;
//     int index = 0;
//     int num[end-start+1];
//     while(left<=mid && right<=end){
//         if(arr[left]<=arr[right]){
//             num[index++] = arr[left++];
//         }
//         else{
//             num[index++] = arr[right++];
//         }
//     }
//     while(left<=mid){
//         num[index++] = arr[left++];
//     }
//     while(right <= end){
//         num[index++] = arr[right++];
//     }

//     index = 0;
//     while(start<=end){
//         arr[start++] = num[index++];
//     }
// }
// void merge(int arr[],int start,int end){
//     if(start>=end){
//         return;
//     }
//     int mid = start+(end-start)/2;
//     merge(arr,start,mid);
//     merge(arr,mid+1,end);

//     merge_sort(arr,start,mid,end);
// }
// void swap(int &a,int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int partition(int arr[],int start,int end){
//     int pivot = arr[end];
//     int pos = start;
//     for(int i =start;i<end;i++){
//         if(arr[i]<=pivot){
//             swap(arr[i],arr[pos]);
//             pos++;
//         }
//     }
//     swap(arr[pos],arr[end]);
//     return pos;
// }
// void quick(int arr[],int start,int end){
//     if(start>=end){
//         return;
//     }
//     int pivot = partition(arr,start,end);
//     quick(arr,start,pivot-1);
//     quick(arr,pivot+1,end);
// }

// Node *level(Node *root,int n){
//     Node *newNode = new Node(n);
//     if(root == nullptr){
//         return newNode;
//     }
//     queue<Node*> que;
//     que.push(root);
//     while(!que.empty()){
//         Node *temp = que.front();
//         que.pop();
//         if(temp->left == nullptr){
//             temp->left = newNode;
//             break;
//         }
//         else{
//             que.push(temp->left);
//         }
//         if(temp->right == nullptr){
//             temp->right = newNode;
//             break;
//        }else{
//         que.push(temp->right);
//        }
//     }
//     return root;
// }
// void print_level(Node *root){
//     if(root == nullptr){
//         return;
//     }
//     queue<Node *> que;
//     que.push(root);
//     while(!que.empty()){
//         Node *temp = que.front();
//         que.pop();
//         cout<<temp->data<<" ";
//         if(temp->left != nullptr){
//             que.push(temp->left);
//         }
//         if(temp->right != nullptr){
//             que.push(temp->right);
//         }
//     }
// }

// int main(){
//     int arr[5]= {0,7,7,8,1};
//     quick(arr,0,4);
//     for(int i =0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }

                                        //    ṂAX HEAP
// #include<iostream>
// using namespace std;
// void Heapify(int arr[],int index,int n){
//     int largest = index;
//     int left = 2*index+1;
//     int right = 2*index+2;
//     if(left<n&&arr[left]>arr[largest]){
//         largest = left;
//     }
//     if(right <n&& arr[right]>arr[largest]){
//         largest = right;
//     }
//     if(largest!=index){
//         swap(arr[largest],arr[index]);
//         Heapify(arr,largest,n);
//     }
// }
// void Maxheap(int arr[],int n){
//     for(int i = n/2+1;i>=0;i--){
//         Heapify(arr,i,n);
//     }
// }
// void print(int arr[],int n){
//     for(int i =0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// void sort(int arr[],int n){
//     for(int i = n-1;i>=0;i--){
//         swap(arr[i],arr[0]);
//         Heapify(arr,0,i);
//     }
// }
// int main(){
//     int arr[] = {10,3,8,9,5,13,18,14,11,70};
//     int n =sizeof(arr)/sizeof(arr[0]);
//     Maxheap(arr,n);
//     sort(arr,n);
//     print(arr,n);;
// }




// #include<iostream>
// using namespace std;
// void heapify(int arr[],int index,int n){
//     int largest = index;
//     int left = 2*index+1;
//     int right = 2*index+2;
//     if(left<n && arr[left]>arr[largest]){
//         largest = left;
//     }
//     if(right<n && arr[left]>arr[largest]){
//         largest = right;
//     }
//     if(largest!=index){
//         swap(arr[index],arr[largest]);
//         heapify(arr,largest,n);
//     }
// }
// void create_maxheap(int arr[],int n){
//     for(int i =n/2-1;i>=0;i--){
//         heapify(arr,i,n);
//     }
// }
// int main(){
    
// }

// #include<iostream>
// using namespace std;
// class Heap{
//     public:
//     int *arr;
//     int size;
//     int length;
//     Heap(int a){
//         size = 0;
//         length = a;
//         arr = new int[a];
//     }
//     void Heapify(int index){
//         int largest = index;
//         int left = 2*index+1;
//         int right = 2*index+2;
//         if(left<=size&&arr[])

//     }
//     void insert(int n){
//         if(size == length){
//             cout<<"Heap is full.";
//             return;
//         }
//         arr[size] = n;
//         int index = size;
//         size++;
//         while(index>0 && arr[index]>arr[(index-1)/2]){
//             swap(arr[(index-1)/2],arr[index]);
//             index = (index-1)/2;
//         }
//         cout<<n<<" is entered in Heap.\n";
//     }
//     void print(){
//         for(int i =0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//     }
//     void delete1(){
//         if(size == 0){
//             cout<<"Heap is empty.";
//             return;
//         }
//         cout<<arr[0]<<" is deleted.";
//         swap(arr[size-1],arr[0]);
//         size--;
//         if(size == 0){
//             return;
//         }
//         Heapify(0);
//     }
// };
// int main(){
//     Heap aditya(5);
//     aditya.insert(12);
//     aditya.insert(12);
//     aditya.insert(12);
//     aditya.delete1();
//     aditya.insert(12);

// }
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
    // int a;
    // cin>>a;
    // int arr[a];
    // for(int i =0;i<a;i++){
    //     cin>>arr[i];
    // }
    // priority_queue<int> maxHeap;
    // maxHeap.push(10);
    // maxHeap.push(30);
    // maxHeap.push(20);
    
    // std::cout << "Max-Heap Priority Queue (largest element on top):\n";
    // while (!maxHeap.empty()) {
    //     std::cout << maxHeap.top() << " ";
    //     maxHeap.pop();
    // }
    
// }

                                    //   SLDING WINDOW PROBLEMS
// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int subarray(int arr[],int n){
//     int total = 0;
//     unordered_map<int,int>m;
//     m[0] = 1;
//     int prefixsum = 0;
//     for(int i =0;i<n;i++){
//         prefixsum+=arr[i];
//         // in
//         if(m.count(prefixsum-6)){
//             total+=m[prefixsum];
//             m[prefixsum]++;
//         }
//         else
//         {
//             m[prefixsum]++;
//         }
//     }
//     return total;
// }
// int main(){
//                                     //  NO OF SUBARRAY THAT'S SUM ==0; 
//                                     // BROOT FORCE MEATHOD
//     int arr[] = {0,0,5,5,0,0};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout<<subarray(arr,n);
//     // int total = 0;
//     // for(int i = 0;i<n;i++){
//     //     int sum = 0;
//     //     for(int k = i;k<n;k++){
//     //         sum+=arr[k];
//     //         if(sum==0){
//     //             total++;
//     //         }
//     //     }
//     // }
//     // cout<<total;
//     return 0;
// }
// searching deletion insertion level order traversal pre post in - order
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int val){
//         data = val;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// Node *insert(Node *root,int key){
//     if(root == nullptr){
//         return new Node(key);
//     }
//     if(key>root->data){
//         root->right = insert(root->right,key);
//     }
//     else if(key<root->data){
//         root->left = insert(root->left,key);
//     }
//     return root;
// }

// void level_order(Node *root){
//     if(root == nullptr){
//         return;
//     }
//     queue<Node *> que;
//     que.push(root);
//     while(!que.empty()){
//         Node *temp = que.front();
//         cout<<temp->data<<" ";
//         que.pop();
//         if(temp->left != nullptr){
//             que.push(temp->left);
//         }
//         if(temp->right !=nullptr){
//             que.push(temp->right);
//         }
//     }

// }
// void in_order(Node *root){
//     if(root == nullptr){
//         return;
//     }
//     in_order(root->left);
//     cout<<root->data<<" ";
//     in_order(root->right);
// }
// void pre_order(Node *root){
//     if(root == nullptr){
//         return;
//     }
//     cout<<root->data;
//     pre_order(root->left);
//     pre_order(root->right);
// }
// void post_order(Node *root){
//     if(root == nullptr){
//         return;
//     }
//     post_order(root->left);
//     post_order(root->left);
//     cout<<root->data;
// }
// int searching(Node *root,int key){
//     if(root == nullptr){
//         return -1;
//     }
//     if(root->data == key){
//         return 1;
//     }
//     if(key>root->data){
//         searching(root->right,key);
//     }
//     if(key<root->data){
//         searching(root->left,key);
//     }
//     return -1;
// }
// int sum = 0;
// int sum1(Node *root){
//     if(root == nullptr){
//         return 0;
//     }
//     if(root->left == nullptr && root->right == nullptr){
//         sum+=root->data;
//     }
//     if(root->left != nullptr){
//         sum1(root->left);
//     }
//     if(root->right != nullptr){
//         sum1(root->right);
//     }
//     return sum;
// }
// Node *findmin(Node *root){
//     while(root && root->left != nullptr){
//         root = root->left;
//     }
//     return root;
// }
// Node *delete1(Node *root,int val){
//     if(root == nullptr){
//         return root;
//     }
//     if(val<root->data){
//         root->left = delete1(root->left,val);
//     }
//     else if(val>root->data){
//         root->right = delete1(root->right,val);
//     }
//     else{
//         if(root->left == nullptr){
//             Node *temp = root->right;
//             delete root;
//             return temp;
//         }
//         else if(root->right == nullptr){
//             Node *temp = root->left;
//             delete root;
//             return temp;
//         }
//         else{
//             Node *temp = findmin(root->right);
//             root->data = temp->data;
//             root->right = delete1(root->right,root->data);
//         }
//     }
//     return root;
// }
// int main(){
//     Node *root = nullptr;
//     int a;
//     cin>>a;
//     int arr[a];
//     for(int i =0;i<a;i++){
//         cin>>arr[i];
//     }
//     for(int i =0;i<a;i++){
//         root = insert(root,arr[i]);
//     }
//     in_order(root);
//     cout<<endl;
//     cout<<"Level order: ";
//     level_order(root);
//     cout<<endl;
//     cout<<"searchng: ";
//     int key = 5;
//     if(searching(root,key)){
//         cout<<"found";
//     }
//     cout<<endl;
//     cout<<"Sum: "<<sum1(root);
//     delete1(root,key);
//     cout<<"In order: ";
//     in_order(root);
// }


// #include<bits/stdc++.h>
// #include<queue>
// using namespace std;
// class Node{
// public:
// int data;
// Node *left;
// Node *right;
// Node(int val){
//     data = val;
//     left = nullptr;
//     right = nullptr;
// }
// };

// Node *insert(Node *root,int val){
//     if(root == nullptr){
//         return new Node(val);
//     }
//     if(val>root->data){
//         root->right = insert(root,val);
//     }
//     if(val<root->data){
//         root->left = insert(root,val);
//     }
//     return root;
// }

// void level_order(Node *root){
//     if(root == nullptr){
//         return;
//     }
//     queue<Node *> que;
//     que.push(root);
//     while(!que.empty()){
//         Node *temp = que.front();
//         cout<<temp->data<<" ";
//         que.pop();
//         if(temp->left!=nullptr){
//             que.push(temp->left);
//         }
//         if(temp->right != nullptr){
//             que.push(temp->right);
//         }
//     }
// }
// int searching(Node *root,int key){
//     if(root == nullptr){
//         return 0;
//     }
//     if(root->data == key){
//         return key;
//     }
//     if(key>root->data){
//         searching(root->right,key);
//     }
//     if(key<root->data){
//         searching(root->left,key);
//     }
//     return 0;
// }
// int sum =0;
// void sum1(Node *root){
//     if(root == nullptr){
//         return;
//     }
//     if(root->left == nullptr && root->right == nullptr){
//         sum+=root->data;
//     }
//     if(root->left!= nullptr){
//         sum1(root->left);
//     }
//     if(root->right != nullptr){
//         sum1(root->right);
//     }
// }
// Node *findmin(Node *root){
//     while(root&&root->left!=nullptr){
//         root = root->left;
//     }
//     return root;
// }
// Node *delete1(Node *root,int key){
//     if(root == nullptr){
//         return root;
//     }
//     if(key<root->data){
//         root->left = delete1(root->left , key);
//     }
//     else if(key>root->data){
//         root->right = delete1(root->right,key);
//     }
//     else{
//         if(root->left == nullptr){
//             Node *temp = root->right;
//             delete root;
//             return temp;
//         }else if(root->right == nullptr){
//             Node *temp = root->left;
//             delete root;
//             return temp;
//         }
//         else{
//             Node *temp = findmin(root->right);
//             root->data = temp->data;
//             root->right = delete1(root->right,root->data);
//         }
//     }
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void heapify(vector<int>&heap,int n,int i){
//     int largest = i;
//     int left = 2*i+1;
//     int right = 2*i+2;
//     if(left<n&&heap[left]<heap[largest]){
//         largest = left;
//     }
//     if(right<n&&heap[right]<heap[largest]){
//         largest = right;
//     }
//     if(largest != i){
//         swap(heap[i],heap[largest]);
//         heapify(heap,n,largest);
//     }
// }
// void build(vector<int>& heap){
//     int n = heap.size();
//     for(int i =n/2-1;i>=0;i--){
//         heapify(heap,n,i);
//     }
// }
// void delete11(vector<int> &heap){
//     int n = heap.size();
//     if(n==0){
//         return;
//     }
//     int max = 100;
//     int index = 0;
//     for(int i =0;i<n;i++){
//         if(heap[i]<max){
//             max = heap[i];
//             index = i;
//         }
//     }
//     swap(heap[index],heap[n-1]);
//     heap.pop_back();
//     heapify(heap,heap.size(),index);
// }
// void heapSort(vector<int>& arr) {
//     int n = arr.size();

//     // Build a max heap
//     for (int i = n / 2 - 1; i >= 0; i--) {
//         heapify(arr, n, i);
//     }

//     // Extract elements from the heap one by one
//     for (int i = n - 1; i > 0; i--) {
//         // Move the current root to the end
//         swap(arr[0], arr[i]);

//         // Reduce the heap size and heapify the root
//         heapify(arr, i, 0);
//     }
// }
// int main(){
//     int a;
//     cin>>a;
//     vector<int> heap;
//     for(int i =0;i<a;i++){
//         int value;
//         cin>>value;
//         heap.push_back(value);
//     }
//     build(heap);
//     for(int i =0;i<a;i++){
//         cout<<heap[i]<<" ";
//     }
//     delete11(heap);
//     int b = heap.size();
//     for(int i =0;i<b;i++){
//         cout<<heap[i]<<" ";
//     }
// }

    


// Single File Programming Question
// Problem Statement



// Thor has a binary search tree (BST) and needs to delete all nodes that contain negative values. After deleting these nodes, Thor should print a post-order traversal of the modified tree. Help Thor by writing a program that performs these tasks.

// Input format :
// The first line of the input contains an integer n, representing the number of nodes to insert into the BST.

// The second line contains n space-separated integers, representing the values to insert into the BST.

// Output format :
// The output prints the post-order traversal of the BST after deleting all nodes with negative values.



// Refer to the sample output for formatting specifications.

// Code constraints :
// The given test cases fall under the following constraints:

// 2 ≤ n ≤ 10

// -100 ≤ values ≤ 100

// Sample test cases :
// Input 1 :
// 7
// 10 -5 15 -3 7 12 -18
// Output 1 :
// 7 12 15 10 
// Input 2 :
// 6
// 20 -10 30 -20 40 -15
// Output 2 :
// 40 30 20 


// #include<iostream>
// using namespace std;
// void show(int arr[]){
//     for(int i =0;i<(sizeof(arr)/sizeof(arr[0]));i++){
//         cout<<arr[0];
//     }
// }
// void print(int arr[]){
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i =0;i<n;i++){
//         for(int j =0;j<n;i++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     show(arr);
// }
// void insert(int arr[],int n,int i){
//     if(i == n){
//         return;
//     }
//     cin>>arr[i++];
//     insert(arr,n,i);
// }
// int main(){
//     int a;
//     cin>>a;
//     int arr[a];
//     insert(arr,a,0);
//     print(arr);
// }


// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int value){
//         data = value;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// Node *insert(Node *root,int val){
//     if(root == nullptr){
//         return new Node(val);
//     }
//     if(val>root->data){
//         root->right = insert(root->right,val);
//     }
//     if(val<root->data){
//         root->left= insert(root->left,val);
//     }
//     return root;
// }
// void inorder(Node *root){
//     if(root == nullptr){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// int mian(){
//     int a;
//     cin>>a;
//     int arr[a];
//     for(int i =0;i<a;i++){
//         cin>>arr[i];
//     }
//     Node *root = nullptr;
//     for(int i =0;i<a;i++){
//         root = insert(root,arr[i]);
//     }
//     inorder(root);
//     return 0;
// }



// #include <iostream>
// using namespace std;
// // if we do not use base case then their wqill be stack overflow means segmentation fault
// int fibonacci(int n){
//   if(n ==0){
//     return 0;
//   }
//   if(n==1){
//     return 1;
//   }
//   return fibonacci(n-1)+fibonacci(n-2);
// }
// int main() { 
// int a;
//   cin>>a;
//   // int* arr = new int[a];
//   cout<<fibonacci(a);
// }
// #include<iostream>
// using namespace std;
// //                        worst case for sum(0(n^2));
// // int sum(int n){
// //   int sum = 0;
// //   for(int i =1;i<=n;i++){
// //     for(int k =1;k<=i;k++){
// //       sum++;
// //     }
// //   }
// //   return sum;
// // }
// //                          // best way;   0(1);
// // int sum(int n){
// //   return (n*(n+1))/2;
// // }
// int main(){
//   int a;
//   cin>>a;
//   // cout<<sum(a);
// }
// #include<iostream>
// using namespace std;
// int call(int n){
  
//   if(n==1){
//     cout<<"DONE! ";
//     return 1;
//   }
//   n--;
//   cout<<n;
//   return call(n);
// } 
// int fibonacci(int n){
//   if(n==0){
//     return 0;
//   }else if(n==1){
//     return 1;
//   }
//   return fibonacci(n-1)+fibonacci(n-2);
// }
// int main(){
//   int a;
//   cin>>a;
//   // call(a);
//   cout<<fibonacci(a);
// }
// #include<iostream>
// using namespace std; 
// bool issorted(int arr[],int n){
//   if(n ==0|| n==1){
//     return true;
//   }
//   if(arr[0]>arr[1]){
//     return false;
//   }else{
//     issorted(arr+1,n-1);
//     return true;
//   }
// }
// int main(){
//   int a;
//   cin>>a;
//   int arr[a];
//   for(int i =0;i<a;i++){
//     cin>>arr[i];
//   }
//   if(issorted(arr,a)){
//     cout<<"Array is sorted. ";
//   }else{
//     cout<<"Not sorted.";
//   }
// }
                                            // linear seach
// #include<iostream>
// using namespace std;
// bool search1(int arr[],int n, int key){
//   if(n==0){
//     return false;
//   }
//   // if(n==1){
//   //   if(arr[0]==key){
//   //     return true;
//   //   }else{
//   //     return false;
//   //   }
//   // }
//   if(arr[0]==key){
//     return true;
//   }else{
    
//   search1(arr+1,n-1,key);
  
// }
                                      // sum of array
// // int sum1(int arr[],int n){
// //   if(n==0){
// //     return 0;
// //   }
// //   if(n==1){
// //     return arr[0];
// //   }
// //   return arr[0]+sum1(arr+1,n-1);
// // }
// int main(){
//   int a;
//   cin>>a;
//   int arr[a];
//   for(int i =0;i<a;i++){
//     cin>>arr[i];
//   }
//   int key;
//   cin>>key;
//   if(search1(arr,a,key)){
//     cout<<"Key found! ";
//   }else{
//     cout<<"Key not found.";
//   }
//   // int sum = sum1(arr,a);
//   // cout<<sum;
  
//   return 0;
// }}
                                     // Binary Search
// #include<iostream>
// using namespace std;
// bool search1(int arr[],int s,int l,int key){
//   // int s = 0;
//   // int l = n-1;
//   int mid = s+(l-s)/2;
//   if(s>l){
//     return false;
//   }
//   if(arr[mid] == key){
//     return true;
//   }
//   if(arr[mid]<key){
//     return search1(arr,mid+1,l,key);
//   }else{
//     return search1(arr,s,mid-1,key);
//   }
// }
// int main(){
//   int a;
//   cin>>a;
//   int key;
//   cin>>key;
//   int arr[a];
//   for(int i =0;i<a;i++){
//     cin>>arr[i];
//   }
//   if(search1(arr,0,a-1,key)){
//     cout<<"Found."<<endl;
//   }else{
//     cout<<"Not Found.";
//   }
  
// }
// #include<iostream>
// using namespace std;
// int swap(int , int,string);
// void reverse(int i, int n, string a){
//   n--;
//   if(i>n){
//     return;
//   }
//     swap(i,n-1,a);
//     i++;
//     n--;
//   reverse(i,n,a);  
// }
// int main(){
//   int a;
//   cin>>a;
//   string str;
//   getline(cin,str);
//   reverse(0,a,str);
//   cout<<str;
// }
// int swap(int i,int j,string str){
//   char temp = str[i];
//   str[i]=str[j];
//   str[j]=temp;
// }
                                                   // RECURSSION

                //Reverse an string;
// #include<iostream>
// using namespace std;
// void swap(int a,int b,string& str){
//   char temp = str[a];
//   str[a]=str[b];
//   str[b]=temp;
// }
// void recurssion(int a , int b, string &str)
// {
//   cout<<str<<" ";
  
//   if(b==0|| (b-a)<=1){
//     return;
//   }
//   swap(a,b,str);
//   a++;
//   b--;
//   recurssion(a,b,str);
// }
      // Palindrome
// static int count =0;
// void palindrome(int a,int b,string str){
// cout<<count;
//   if(b==0||(b-a)<=1){
//     return;
//   }
//   if(a>b){
//     return;
//   }
//   if(str[a]==str[b]){
//     a++;
//     b--;
//     count++;
//     palindrome(a,b,str);
//   }
// }
                   // Binary Search
// int binary(int a,int key, int arr[]){
//   if(a==0){
//     return -1;
//   }
//   if(arr[0]==key){
//     return 1;
//   }
//   return binary(a-1,key,arr+1);
//   // return -1;
// }
                      //Check  Bubble Sort;
// int sort(int a,int arr[]){
//   if(a==1){
//     return 1;
//   }
//   if(arr[0]<arr[0+1]){
//     return sort(a-1,arr+1);
//   }else{
//     return -1;
//   }
// }
                        // Bubble Sort
    // int sort(int a,int arr[]){
    //   if(a==0){
    //     return -1;
    //   }
    //   for(int i =0;i<a;i++){
    //     if(arr[i]>arr[i+1]){
    //       int temp = arr[i];
    //       arr[i]=arr[i+1];
    //       arr[i+1]=temp;
    //     }
    //   }
  //     return sort(a-1,arr+1);
  //   }
  // int main(){
//   // int a;
//   //   cin>>a;
//     string str;
//     getline(cin,str);
//     recurssion(0,str.length()-1,str);
//     cout<<endl<<str;
// int a;
    // cin>>a;
    // string str;
    // getline(cin,str);
    // palindrome(0,str.length()-1,str);
    // if(count==((str.length()/2))){
    //   cout<<"Palindrome";
    // }
    // int a;
    // cin>>a;
    // int arr[a];
    // for(int i =0;i<a;i++){
    //   cin>>arr[i];
    // }
    // int key;
    // cin>>key;
    // int b = binary(a,key,arr);
    // cout<<b;
    
    // for(int i =0;i<a;i++){
    //   cout<<arr[i];
    // }
// int arr[a];
//     for(int i =0;i<a;i++){
//       cin>>arr[i];
//     }
//     sort(a,arr);
//     for(int i =0;i<a;i++){
//       cout<<arr[i]<<" ";
//     }










    
// }
#include<iostream>
using namespace std;
// class Node{
//     public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int value){
//         data = value;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// Node *insert(Node *root,int val){
//     if(root == nullptr){
//         return new Node(val);
//     }
//     if(val>root->data){
//         root->right = insert(root->right,val);
//     }
//     if(val<root->data){
//         root->left= insert(root->left,val);
//     }
//     return root;
// }
// void inorder(Node *root){
//     if(root == nullptr){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// int sum2 = 0;

// // int sum1(Node *root){
// //   if(root == nullptr){
// //     return 0;
// //   }
// //   sum1(root->left);
// //   if(root->data%2!=0 ){
// //     sum2+=root->data;
    
// //   }
// //   sum1(root->right);
// //   return sum2;
// // }
// int main(){
//     int a;
//     cin>>a;
//     int arr[a];
//     for(int i =0;i<a;i++){
//         cin>>arr[i];
//     }
//     Node *root = nullptr;
//     for(int i =0;i<a;i++){
//         root = insert(root,arr[i]);
//     }
//     inorder(root);
//   cout<<endl;
//   cout<<sum1(root);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void Booble_sort(int arr[],int n){
//   for(int i = 0 ;i<n;i++){
//     for(int j = 0;j<n-i-1;j++){
//       if(arr[j]>arr[j+1]){
//         swap(arr[j],arr[j+1]);}}}
// }
// void Selection_sort(int arr[],int n){
//   for(int i =0;i<n;i++){
//     int findmin = i;
//     for(int j =i+1;j<n;j++){
//       if(arr[j]<arr[findmin]){
//         findmin = j;
//       }
//     }
    
//       swap(arr[i],arr[findmin]);
    
//   }
// }

// void Insertionsort(int arr[],int n){
//   for(int i =0;i<n;i++){
//     int current = arr[i];
//     int prev = i-1;
//     while(prev>=0 && current<arr[prev]){
//       arr[prev+1] = arr[prev];
//       prev--;
//     }
//     arr[prev+1] = current;
//   }
// }
// int main(){
//   int a;
//   cin>>a;
//   int arr[a];
//   for(int i =0;i<a;i++){
//     cin>>arr[i];
//   }
//   Insertionsort(arr,a);
//   for(int i =0;i<a;i++){
//     cout<<arr[i]<<" ";
//   }
// }
// #include<stack>
// #include<queue>
// struct Node{
// public:
// int data;
// Node* left;
// Node *right;
// };
// Node *createNode(int value){
//   Node *newNode = new Node;
//   newNode->data = value;
//   newNode->left = nullptr;
//   newNode->right = nullptr;
//   return newNode;
// }
// Node *create(Node *root,int val){
//   if(root == nullptr){
//     return createNode(val);
//   }
//   root->next = create(root->next,val);
//   return root;
// }

// int main(){
//   Node *root = nullptr;
//   // for(int i =0;i<5;i++){
//   //   int a;
//   //   cin>>a;
//   //   // root = create(root,a);
//   // }
//     int a;
//   if(root == nullptr){
//     cin>>a;
//     root->data = a;
//     root->next = nullptr;
//   }
//   Node *newNode = root;
//   while(1){
//     Node*temp = new Node;
//     cin>>a;
//     if(a==-1){
//       break;
//     }
//     temp->data = a;
//     newNode->next = temp;
//     newNode = newNode->next;
//   }
//   Node *alpha = root;
//   while(alpha != nullptr){
//     cout<<alpha->data<<" ";
//     alpha = alpha->next;
//   }
  
// }
// Node *create(Node *head){
//   Node *newNode = head;
//   int a;
//   if(head == nullptr){
//     cin>>a;
//     head->data = a;
//     head->next = nullptr;
//   }
//   while(true){
//     cin>>a;
//     if(a==-1){
//       break;
//     }
//     Node *temp = new Node;
//     temp->data = a;
//     temp->next = nullptr;
//     newNode->next = temp;
//     newNode = newNode->next;
//   }
//   return head;
// }
// void print(Node *Head){
//   Node *alpha = Head;
//   while(alpha != nullptr){
//     cout<<alpha->data<<" ";
//     alpha = alpha->next;
//   }
// }
// bool prime(int n){
//   if(n<=2){
//     return false;
//   }
//   for(int i =2;(i*i)<=n;i++){
//     if(n%i == 0){
//       return false;
//     }
//   }
//   return true;
// }
// void delete1(Node *Head){
//   Node *current = Head;
//   Node *temp = nullptr;
//   while(current!=nullptr){
    
//     if(prime(current->data)){ // Added null check to prevent segfault
//       Node *a = current;
//       temp->next = current->next;
//       current = temp->next;
//       delete a;
//     }else{
//       temp = current;
//       current  = current->next;
//     }
//   }
// }
// void no(Node *Head,int sum = 0){
//   Node *alpha = Head;
//   while(alpha!=nullptr){
//     if(prime(alpha->data)){
//       cout<<alpha->data<<" ";
//     }
//     alpha= alpha->next;
//   }
// }
// Node *beg(Node *Head){
//   Node *start = new Node;
//   int a;
//   cout<<"enter: ";
//   cin>>a;
//   start->data = a;
//   start->next = Head;
//   Head = start;
//   return Head;
// }
// void deletion(Node *&Head){
//   Node *alpha = Head;
//   while(alpha){
//     if(alpha->next==nullptr){
//       Node *a = alpha;
//       delete a;
//       return;
//     }else{
      
//     alpha= alpha->next;
//     }
//   }
// }
// int main(){
//   int a;
//   cin>>a;
//   Node* Head = new Node;
//   Head->data = a;
//   Head->next = nullptr;
//   Head = create(Head);
//   print(Head);
//   cout<<endl;
//   no(Head);
//   Head = beg(Head);
//   // delete1(Head);
//   deletion(Head);
//   print(Head);
// }

// void Binary_search(int arr[],int n,int key){
//   int start = 0;
//   int end = n-1;
//   while(start<=end){
//     int mid =start + (end-start)/2;
//     if(arr[mid] == key){
//       cout<<"found";
//       return;
//     }
//     else if(key<arr[mid]){
//       end = mid-1;
//     }
//     else{
//       start = mid+1;
//     }
//   }
//   cout<<"Not found";
// }
// int main(){
//   int arr[] = {1,2,3,4,5};
//   Binary_search(arr,5,5);
// }

// Node *create(Node *root){
//   int a;
//   cin>>a;
//   if(a==-1){
//     return nullptr;
//   }
//   root = new Node;
//   root->data = a;
//   root->next = nullptr;
//   Node *newNode = root;
//   while(1){
//     cin>>a;
//     if(a==-1){
//       break;
//     }
//     Node *temp = new Node;
//     temp->data = a;
//     temp->next = nullptr;
//     newNode->next = temp;
//     newNode = temp;
//   }
//   return root;
// }
// void delete1(Node *&root,int a){
//   Node *alpha = root;
//   Node *prev = nullptr;
//   while(alpha){
//     if(alpha->data == a){
//       if(prev==nullptr){
//         root = alpha->next;
//         delete alpha;
//         alpha = root;
//       }
//       else{
//         prev->next = alpha->next;
//         delete alpha;
//         alpha = prev->next;
//       }
//     }else{
//       prev = alpha;
//       alpha = alpha->next;
//     }
//   }
// }
// void create(Node *&root,Node *&last){
//   int a;
//   cin>>a;
//   if(a  == -1){
//     return;
//   }
//   root = new Node;
//   root->data = a;
//   root->left = nullptr;
//   root->right = nullptr;
//   Node *newNode = root;
//   while(1){
//     cin>>a;
//     if(a==-1){
//       break;
//     }
//     Node *temp = new Node;
//     temp->data = a;
//     newNode->right = temp;
//     temp->left = newNode;
//     temp->right = nullptr;
//     newNode = temp;
//   }
//   last = newNode;
//   // return root;
// }
// void print(Node *root){
//   Node *alpha = root;
//   while(alpha){
//     cout<<alpha->data<<" ";
//     alpha = alpha->left;
//   }
// }
// void Delete1(Node *&root){
//   int a;
//   cin>>a;
//   Node *alpha = root;
//   while(alpha){
//     if(alpha->data == a){
//       (alpha->left)->right = alpha->right;
//       delete alpha;
//       return;
      
//     }
//     alpha = alpha->right;
//   }
// }
// int main(){
//   Node *root = new Node;
//   root = nullptr;
//   Node *last = new Node;
//   last = nullptr;
//   create(root,last);
//   print(root);
//   // delete1(root,5);
//   // print(root);
//   Delete1(root);
//   print(last);
// }
// void create(Node *&root){
//   int a;
//   cin>>a;
//   if(a==-1){
//     return;
//   }
//   root = new Node;
//   root->data = a;
//   root->next = nullptr;
//   Node *newNode = root;
//   while(1){
//     cin>>a;
//     if(a==-1){
//       break;
//     }
//     Node *temp = new Node;
//     temp->data = a;
//     temp->next = nullptr;
//     newNode ->next = temp;
//     newNode = temp;
//   }
// }
// void print(Node *root){
//   Node *alpha = root;
//   while(alpha){
//     cout<<alpha->data<<" ";
//     alpha = alpha->next;
//   }
// }
// void reverse(Node *&root){
//   Node *curr = root;
//   Node *pre = nullptr;
//   Node* next = nullptr;
//   while(curr){
//     next = curr->next;
//     curr->next = pre;
//     pre = curr;
//     curr = next;
//   }
//     // root->left = nullptr;
//   root = pre;
// }
// int main(){
//   Node *root = new Node;
//   root = nullptr;
//   create(root);
//   reverse(root);
//   print(root);
// }




// int main(){
//   stack<int> stk;
//   while(1){
//     int a;
//     cin>>a;
//     if(a==-1){
//       break;
//     }
//     stk.push(a);
//   }
//   while(!stk.empty()){
//     cout<<stk.top()<<" ";
//     stk.pop();
//   }
// }
// // 1 push 2 pop 3 without 5 and 5 devisible 4 print all stack ele
// void stack1(stack<int> &stk){
//   while(1){
//   stack<int> temp;
//   int i;
//   cin>>i;
//   switch(i){
//     case 1:
//       int b;
//       cout<<"enter: ";
//       cin>>b;
//     stk.push(b);
//     break;
//     case 2:
//     stk.pop();
//       cout<<"pop";
//     break;
//     case 3:
//     while(!stk.empty()){
//       if(stk.top()%5!=0){
//         temp.push(stk.top());
//       }
//         stk.pop();
//     }
//       while(!temp.empty()){
//         stk.push(temp.top());
//         temp.pop();
//       }
//     break;
//     case 4:
//     while(!stk.empty()){
//       cout<<stk.top()<<" ";
//       stk.pop();
//     }
//     break;
//     case 5:
//     return;
//   }
//   }
// }
// int main(){
//   stack<int> stk;
//   stack1(stk);
// }
// int main(){
//   int att1[10];
//   int att2[10];
// int i =0;
//   while(1){
//     int u,v;
//     cin>>u>>v;
//     if(u == -1 || v == -1){
//       break;
//     }
//     att1[i] = u;
//     att2[i] = v;
//     i++;
//   }
//   int n =i;
//   for(int j =0;j<n;j++){
//     for(int k =j;k<n-j-1;k++){
//       if(att2[k]>att2[k+1]){
//         swap(att1[k],att1[k+1]);
//         swap(att2[k],att2[k+1]);
//       }
//     }
//   }
//   for(int i =0;i<n;i++){
//     cout<<att1[i]<<" ";
//   }
// }
// bool prime(int value){
//   if(value <2)return false;
//   for(int i =2;i*i<=value;i++){
//     if(value%i==0){
//       return false;
//     }
//   }
//   return true;
// }
// Node *findmin(Node *root){
  
//   while(root && root->left != nullptr){
//     root = root->left;
//   }
//   return root;
// }
// Node *Binary_Search_Tree(Node *root,int value){
//   if(root == nullptr){
//     return createNode(value);
//   }
//   if(value<root->data){
//     root->left = Binary_Search_Tree(root->left,value);
//   }
//   if(value>root->data){
//     root->right = Binary_Search_Tree(root->right,value);
//   }
//   return root;
// }
// Node* delete1(Node *root,int value){
//   if(root == nullptr){
//     return root;
//   }
//   if(value<root->data){
//     root->left = delete1(root->left,value);
//   }
//   else if(value>root->data){
//     root->right = delete1(root->right,value);
//   }
//   else{
//     if(root->left == nullptr){
//       // Node *temp = new Node;
//       Node *temp = root->right;
//       delete root;
//       return temp;
//     }
//     else if(root->right == nullptr){
//       Node *temp = root->left;
//       delete root;
//       return temp;
//     }
//     else{
//       Node *temp = findmin(root->right);
//       root->data = temp->data;
//       root->right = delete1(root->right,root->data);
//     }
//   }
//   return root;
// }
// void inorder(Node *root){
//   if(root == nullptr){
//     return;
//   }
//   inorder(root->left);
//   cout<<root->data<<" ";
//   inorder(root->right);
// }
//   int sum =0;
// int pri_del(Node *root){
//   if(root == nullptr){
//     return 0;
//   }
//   pri_del(root->left);
//   pri_del(root->right);
//   if(prime(root->data)){
//     sum+=root->data;
//     // return delete1(root,root->data);
//   }
//   // return root;
//   return sum;
// }
// int main(){
//   int a;
//   cin>>a;
//   int arr[a];
//   for(int i =0;i<a;i++){
//     cin>>arr[i];
//   }
//   Node *root = nullptr;
//   for(int i =0;i<a;i++){
//     root = Binary_Search_Tree(root,arr[i]);
//   }
//   int oot = pri_del(root);
//   cout<<oot<<endl;
//   inorder(root);
// }

// void Selection_sort(int arr[],int n){
//   for(int i =0;i<n;i++){
//     int findmin = i;
//     for(int j =i+1;j<n;j++){
//       if(arr[j]<arr[findmin]){
//         findmin = j;
//       }
//     }

//       swap(arr[i],arr[findmin]);

//   }
// }
// #include<bits/stdc++.h>
// #include<algorithm>
// #include<vector>
// using namespace std;
// void show(int a){
//   cout<<a;
// }
// int main(){
//   int arr[]={1,2,3,4,5};
//   vector<int> arr1(arr,arr+5);
//   for_each(arr1.begin(),arr1.end(),show);
// }
// int main(){
//   int key = 3;
//   int arr[] = {12,3,17,8,34,56,9};
//   vector<int> v(arr,arr+7);
//   vector<int>::iterator iter;
//   iter = find(v.begin(),v.end(),key);
//   if(iter!=v.end())
//     cout<<"found"<<" ";
//   else{
//     cout<<"not";
//   }
// }
// void sort1(int arr[],int n,int k){
//   // sort(arr+3,arr+10);
//   for(int i =0;i<n;i++){
//     int min = i;
//     for(int j = i+1;j<n;j++){
//       if(arr[j]<arr[min]){
//         min = j;
//       }
//     }
//     swap(arr[i],arr[min]);
//   }
  
// }
// void check(int arr[],int n){
//   // int nn = 0;
//   for(int i =1;i<n-1;i++){
//     if(arr[i]<arr[i+1]){
//      cout<<"sorted";
//       return;
//     }
  
//   }
//   // if(nn=8){
//   //   cout<<"sorted";
//   // }else{
//   //   cout<<"not";
//   // }
//   cout<<"not";
//   return;
// }
// int pack(int arr[]){
//   int nn =0;
//   for(int i =1;i<10-1;i++){
//     if(arr[i]>arr[i-1]){
//       nn +=1;
//     }
//   }
//   return nn-1;
// }
// int main(){
//   int arr[10];
//   for(int i =0;i<10;i++){  
//     cin>>arr[i];
//   }
//   // sort1(arr,10,3);
//   for(int i =0;i<10;i++){
//     cout<<arr[i]<<" ";
//   }
//   // check(arr,10);
//   cout<<endl;
//   int nn =0;
//   // cout<<pack(arr);
//   for(int i = 0;i<10;i++){
//     for(int j =i+1;j<10;j++){
//       if(arr[j]>arr[j-1]){
//         nn+=1;
//       }
//     }
//   }
//   cout<<nn;
// }
// #include<iostream>
// using namespace std;

// void print(int arr[],int n){
//   cout<<"Array: ";
//   for(int i =0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;
// }
                                          //  SORT
// void selection_sort(int arr[],int n){
//   for(int i =0;i<n;i++){
//     int findmin = i;
//     for(int j = i+1;j<n;j++){
//       if(arr[j]<arr[findmin]){
//         findmin = j;
//       }
//       swap(arr[i],arr[findmin]);
//     }
//   }
// }
// void insertion_sort(int arr[],int n){
//   for(int i =0;i<n;i++){
//     int current = arr[i];
//     int prev = i-1;
//     while(prev>=0 && arr[prev]>current){
//       arr[prev+1] = arr[prev];
//       prev--;
//     }
//     arr[prev+1] = current;
//     print(arr,n);
//   }
// }
// int main(){
  // int a;
  // cin>>a;
  // int arr[a];
  // for(int i =0;i<a;i++){
  //   cin>>arr[i];
  // }
  // print(arr,a);
  // insertion_sort(arr,a);
  // print(arr,a);
// }

                                                      // LINKED LIST
// struct Node {
// int data;
// Node *next;
// };
// Node *createNode(int value){
//   Node *temp = new Node;
//   temp->data = value;
//   temp->next = nullptr;
//   return temp;
// }
// void print(Node *head){
//   cout<<"Linked list: ";
//   Node *alpha = head;
//   while(alpha){
//     cout<<alpha->data<<" ";
//     alpha=alpha->next;
//   }
//   cout<<endl;
// }
// Node *insertNode(Node *head,int value){
//   if(head == nullptr){
//     return createNode(value);
//   }
//   Node *newNode = head;
//   while(newNode->next != nullptr){
//     newNode = newNode->next;
//   }
//   Node *temp = new Node;
//   temp->data = value;
//   temp->next =nullptr;
//   newNode->next = temp;
//   return head;
// }
// Node *reverse(Node *head){
//   Node *current = head;
//   Node *prev = nullptr;
//   Node *after = nullptr;
//   while(current != nullptr){
//     after = current->next;
//     current->next = prev;
//     prev = current;
//     current = after;
//   }
//   head = prev;
//   return head;
// }
// Node *remove(Node *head,int value){
//   Node *alpha = head;
//   Node *prev = nullptr;
//   if(head->data == value){
//     head = head->next;
//     delete alpha;
//     return head;
//   }
//   while(alpha->data != value){
//     prev = alpha;
//     alpha = alpha->next;
//   }
//   prev->next = alpha->next;
//   delete alpha;
//   return head;
// }

// Node *insertNode(Node *head){
//   int a;
//   cin>>a;
//   if(a==-1){
//     return nullptr;
//   }
//   if(head == nullptr){
//     head = createNode(a);
//   }
//   Node *newNode = head;
//   while(1){
//     cin>>a;
//     if(a==-1){
//       break;
//     }
//     Node *temp = new Node;
//     temp->data = a;
//     temp->next = nullptr;
//     newNode->next = temp;
//     newNode = temp;
//   }
//   return head;
// }
// int main(){
//   int a;
//   cin>>a;
//   Node *head = nullptr;
//   while(a!=-1){
//     head = insertNode(head,a);
//     cin>>a;
//   }
  // int arr[a];
  // for(int i =0;i<a;i++){
  //   cin>>arr[i];
  // }
  // for(int i = 0;i<a;i++){
  //   head = insertNode(head,arr[i]);
  // }
  // head = insertNode(head);
  // head = remove(head,5);
//   head = reverse(head);
//   print(head);
// }
                                              // PRIORITY QUEUE THROUGH ARAY;
// #include<queue>
// void print(int arr[],int n){
//   cout<<"array: ";
//   for(int i =0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;
// }
// void priority_Queue(int arr1[],int arr2[],int n){
//   for(int i =0;i<n;i++){
//     for(int j =0;j<n-i-1;j++){
//       if(arr1[j]>arr1[j+1]){
//         swap(arr1[j],arr1[j+1]);
//         swap(arr2[j],arr2[j+1]);
//       }
//     }
//   }
// }
// void priority_Queue(int arr1[],int arr2[],int n){
//   priority_queue<pair<int,int>> pq;
//   for(int i =0;i<n;i++){
//     pq.push({arr1[i],arr2[i]});
//   }
//   for(int i =0;!pq.empty();i++){
//     arr1[i] = pq.top().first;
//     arr2[i] = pq.top().second;
//     pq.pop();
//   }
// }
// int main(){
//   int u,v;
// int arr1[100];
// int arr2[100];
// int i =0;
//   while(1){
//     cin>>u>>v;
//     if(u==-1 || v == -1){
//       break;
//     }
//     arr1[i] = u;
//     arr2[i++] = v;
//   }
//   priority_Queue(arr1,arr2,i);
//   print(arr1,i);
//   print(arr2,i);
// }


















