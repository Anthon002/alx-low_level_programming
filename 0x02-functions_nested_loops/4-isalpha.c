/**
 * _isalpha - Checks if a character is alphabetic.
 * @ch: The character to be checked.
 *
 * Returns: 1 if the character is an alphabetic letter, lowercase or uppercase,
 *          0 otherwise.
 */
int _isalpha(int ch)
{
    int _isalpha = 0;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        _isalpha = 1;
    }

    return (_isalpha);
}

