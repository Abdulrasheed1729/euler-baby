#include <cstddef>
#include <print>

/**
 *   Euler Project: Sum Square Difference
 *   <p>The sum of the squares of the first ten natural numbers is,</p>
$$1^2 + 2^2 + ... + 10^2 = 385.$$
<p>The square of the sum of the first ten natural numbers is,</p>
$$(1 + 2 + ... + 10)^2 = 55^2 = 3025.$$
<p>Hence the difference between the sum of the squares of the first ten natural
numbers and the square of the sum is $3025 - 385 = 2640$.</p> <p>Find the
difference between the sum of the squares of the first one hundred natural
numbers and the square of the sum.</p>
 */

// okay alil bit of cheat here: $$\sum_{i=1}^n k = \frac{n(n+1)}{2}$$
// and $$\sum_{i=1}^n k^2 = \frac{n(n+1)(2n+1)}{6}$$
// thus $$square_of_sum - sum_of_square = \frac{n(n+1)(3n^2 - n -2)}{6}$$

size_t sq_diff(size_t n) { return (n * (n + 1) * (3 * n * n - n - 2)) / 12; }

int main() {
  std::println("Hello World");

  size_t n = 100;
  std::println("sq_diff({}) = {}", n, sq_diff(n));
  return 0;
}
