grep -v nicolasbauer phonebook | grep -E 'Bauer.*Nicolas|Nicolas.*Bauer|nicolas.*Bauer|Bauer.*nicolas|bauer.*Nicolas|Nicolas.*bauer|bauer.*nicolas|nicolas*bauer' | awk '{print $(NF-1)}'
