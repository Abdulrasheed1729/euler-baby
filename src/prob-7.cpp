#include <cstddef>
#include <print>

/**
 * Project Euler: 10 001st Prime
 * By listing the first six prime numbers: $2, 3, 5, 7, 11$, and $13$, we can
 see that the $6$th prime is $13$.
 * What is the $10\,001$st prime number?

 */

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

size_t nth_prime(size_t n) {
  size_t count = 0;
  size_t i = 2;

  while (true) {
    if (is_prime(i))
      count++;

    if (count == n)
      return i;
    i++;
  }
}

int main() {
  std::println("Hello World");

  size_t n = 10'001;
  std::println("nth_prime({}) = {}", n, nth_prime(n));
  return 0;
}
