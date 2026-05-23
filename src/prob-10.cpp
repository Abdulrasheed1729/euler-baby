#include <cstddef>
#include <print>

bool is_prime(size_t n) {
  if (n < 2)
    return false;
  if (n == 2)
    return true;
  if (n % 2 == 0)
    return false;
  for (size_t i = 3; i * i <= n; i += 2) {
    if (n % i == 0)
      return false;
  }

  return true;
}

size_t sum_of_prime_below(size_t N) {
  size_t sum = 2;
  for (size_t i = 3; i <= N; i += 2) {
    if (is_prime(i))
      sum += i;
  }

  return sum;
}

int main() {
  std::println("Hello, World!");

  size_t N = 2'000'000;
  std::println("sum_of_prime_below({}) = {}", N, sum_of_prime_below(N));

  return 0;
}
