#include "saura/app/app.hpp"

int
main() {
  auto app_ctx = new(Saura::App);
  int  a       = 0;
  app_ctx->run();
  return 0;
}
