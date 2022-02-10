#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void print_vector(vector<T>& vec) {
  // 전체 벡터를 출력하기
  cout << "[ ";
  for (typename vector<T>::iterator itr = vec.begin(); itr != vec.end();
       ++itr) {
    cout << *itr << " ";
  }
  cout << "]";
}
int main() {
  vector<int> vec;
  vec.push_back(10);
  vec.push_back(20);
  vec.push_back(30);
  vec.push_back(40);
  vec.push_back(20);

  cout << "처음 벡터 상태" << endl;
  print_vector(vec);

/* //1번 오류가 있는 코드
  vector<int>::iterator itr = vec.begin();
  vector<int>::iterator end_itr = vec.end();

  for (; itr != end_itr; ++itr) {
    if (*itr == 20) {
      //아래와 같이 입력을 할시 오류가 발생한다.
      //vec.erase(itr)을 수행하게 되면 itr은 유효한 반복자가 아니기 떄문
      //따라서 itr != end_itr이 무한루프에 빠진다.
      vec.erase(itr);
    }
  }
  */
/*  //2번 
    //성공적으로 컴파일이 됐지만 비효율적인 코드이다
    //원소 20을 찾아 지우고 다음 걸로 넘어가야 하는데
    //다시 처음으로 돌아가기 때문이다.
 vector<int>::iterator itr = vec.begin();
 for(; itr!= vec.end(); ++itr){
     if(*itr == 20){
         vec.erase(itr);
         itr = vec.begin();
     }
 }
*/
 
 //3번
 //나중에 더 깔끔하게 처리하는 법을 배운다.
for(vector<int>::size_type i = 0; i!=vec.size(); i++){
    if(vec[i] ==20){
        vec.erase(vec.begin()+i);
        i--;
    }
}
  cout << "값이 20 인 원소를 지운다!" << endl;
  print_vector(vec);
}
