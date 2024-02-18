void stk() {
  stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);
  printf("%d\n", s.top());
  printf("%d\n", s.top());
  printf("%d\n", s.top());
  s.pop();
  printf("%d\n", s.top());
  printf("%d\n", s.top());
  s.pop();
  printf("%d\n", s.top());
  s.pop();
}

void q() {
  cout << "------------------" << endl;
  queue<int> que;
  que.push(1);
  que.push(2);
  que.push(3);

  printf("%d\n", que.front());
  que.pop();

  printf("%d\n", que.front());
  que.pop();

  printf("%d\n", que.front());
  que.pop();

}

int main() {
  stk();
  q();
}