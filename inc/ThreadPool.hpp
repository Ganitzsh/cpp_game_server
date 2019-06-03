#ifndef THREAD_POOL_HPP
#define THREAD_POOL_HPP

class ThreadPool {
private:
  short size;

public:
  ThreadPool(short size);
  virtual ~ThreadPool();

  int shutdown();
};

#endif /* THREAD_POOL_HPP */
