def remove_duplicates(data_list):
    return list(dict.fromkeys(data_list))
def string_whitespaces(string_list):
    return [s.strip() for s in string_list]