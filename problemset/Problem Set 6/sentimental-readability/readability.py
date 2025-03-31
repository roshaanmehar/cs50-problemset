from cs50 import get_string

paragraph = get_string("Please entere a paragraph: ")


def countletters(paragraph):
    letters = 0
    for i in paragraph:
        if i.isalpha():
            letters = letters + 1
    return letters


def countwords(paragraph):
    words = 0
    for i in paragraph:
        if i == " ":
            words = words + 1
    return words + 1


def countsentences(paragraph):
    sentences = 0
    for i in paragraph:
        if i in (".", "?", "!"):
            sentences = sentences + 1
    return sentences


letters = countletters(paragraph)

words = countwords(paragraph)

sentences = countsentences(paragraph)

l = (float(letters) / float(words)) * 100
s = (float(sentences) / float(words) * 100)
index = 0.0588 * l - 0.296 * s - 15

if index < 1:
    print("Before Grade 1")
elif index >= 1 and index < 2:
    print("Grade 1")
elif index >= 2 and index < 3:
    print("Grade 2")
elif index >= 3 and index < 4:
    print("Grade 3")
elif index >= 4 and index < 5:
    print("Grade 4")
elif index >= 5 and index < 6:
    print("Grade 5")
elif index >= 6 and index < 7:
    print("Grade 6")
elif index >= 7 and index < 8:
    print("Grade 7")
elif index >= 8 and index < 9:
    print("Grade 8")
elif index >= 9 and index < 10:
    print("Grade 9")
elif index >= 10 and index < 11:
    print("Grade 10")
elif index >= 11 and index < 12:
    print("Grade 11")
elif index >= 12 and index < 13:
    print("Grade 12")
elif index >= 13 and index < 14:
    print("Grade 13")
elif index >= 14 and index < 15:
    print("Grade 14")
elif index >= 15 and index < 16:
    print("Grade 15")
elif index >= 16 and index < 17:
    print("Grade 16")
elif index > 17:
    print("Grade 16+")

