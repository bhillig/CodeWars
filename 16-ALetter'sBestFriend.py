# 16 - A Letter's Best Friend (CodeWars Exercise)

# Given a string, return if a given letter always appears immediately before another given letter.

def best_friend(txt, a, b):
    # For every character in txt
    for i in range(0, len(txt)):
        # Edge case where if we reached the last character
        if i == len(txt) - 1:
            # if the last char is a then b is not possible
            if txt[i] == a:
                return False
            else:
                return True

        if txt[i] == a and txt[i + 1] != b:
            return False
    return True