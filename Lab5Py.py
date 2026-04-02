def factorial(x):
    if x == 0 or x == 1:
        return 1
    return x * factorial(x - 1)

def exp_x(x, n):
    total = 0
    single_step = lambda val, idx: (val ** idx) / factorial(idx)

    for i in range(n):
        total += single_step(x, i)

    return total

sn_total = 0.0


def calculate_sn(n):
    global sn_total

    if n > 0:
        sn_total += ((-1) ** (n + 1)) / n
        calculate_sn(n - 1)
if __name__ == "__main__":
    print("--- Question 2: e^x Calculator ---")
    try:
        user_x = float(input("Enter the value for x: "))
        user_n = int(input("Enter the number of terms (n): "))
        result_q2 = exp_x(user_x, user_n)
        print(f"e^{user_x} with {user_n} terms is: {result_q2}")
    except ValueError:
        print("Please enter valid numeric inputs.")

    print("\n--- Question 3: Sn Calculator ---")
    try:
        user_sn_n = int(input("Enter the value for n: "))
        calculate_sn(user_sn_n)
        print(f"Sn for n={user_sn_n} is: {sn_total}")
    except ValueError:
        print("Please enter a valid integer.")