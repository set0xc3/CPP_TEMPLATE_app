#ifndef APP_HPP_
#define APP_HPP_

namespace Saura {

class App {
private:
  bool is_running;

public:
  App();
  ~App();

  void run();
};

} // namespace Saura

#endif
