# c_thread_test
do some practice with the thread library


### backlog
- 模拟三个窗口同时卖票
- 总数100张

### first plan
use std::mutex 
对临界资源进行 lock and unlock

### second plan
use scope ptr lock(lock_guard)
利用栈上的对象会释放资源 解锁
