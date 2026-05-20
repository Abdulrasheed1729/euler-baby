#include <cstddef>
#include <print>

/**
 *   Euler Project: Even Fibonacci Numbers
 *   2520 is the smallest number that can be divided by each of the numbers from
1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the
numbers from 1 to 20?
 */

// the problem is the same as finding the lcm of numbers from 1 to 20. That
// is,lcm(1,2,3,,...,20)

#define MAX_LIMIT 4'000'000

size_t gcd(size_t a, size_t b) {
  size_t c;
  while (b != 0) {
    c = b;
    b = a % c;
    a = c;
  }

  return c;
}

size_t lcm(size_t a, size_t b) { return (a * b) / gcd(a, b); }

size_t lcm_to_n(size_t n)

{
  size_t result = 1;
  for (size_t i = 1; i < n; i++) {
    result = lcm(result, i + 1);
  }

  return result;
}

int main() {
  std::println("Hello World");

  std::println("lcm_to_n({}) = {}", 20, lcm_to_n(20));
  return 0;
}
