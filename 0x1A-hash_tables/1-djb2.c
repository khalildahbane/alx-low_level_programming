/**
 * hash_djb2 - Implementation of the djb2 algorithm
 * @str: String used to generate hash value
 * Return: Hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int x;

<<<<<<< HEAD
    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c;
    }
=======
	hash = 5381;
	while ((x = *str++))
	{
		hash = ((hash << 5) + hash) + x;
	}
>>>>>>> 26e384c9c80c85ea21e54f7a8306d09383c46502
    return (hash);
}