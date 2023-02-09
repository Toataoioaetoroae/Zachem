#include<iostream>
#include<thread>
using namespace std;
int f()
{
 for(int i = 0;i < 1000000;i++)
 {
  cout << i << " " << this_thread::get_id << endl;     
 }
 return 0;
}
int main()
{
 thread t1(f);
 t1.detach();
 thread t2(f);
 t2.detach();
 thread t3(f);
 t3.join();
 return 0;
}
