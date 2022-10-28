import os


def main():
    spath = 'C:/Users/Smart View/Desktop/CF_Copy'

    for roots, dirs, files in os.walk(spath):
        for file in files:
            if file.endswith('.cpp'):
                old_file_name = os.path.join(roots, file)
                # print(old_file_name)

                path = old_file_name.split('\\')[0]
                name = old_file_name.split(') ')[1]
                new_file_name = path + '/' + name
                os.rename(old_file_name, new_file_name)
                #cntr += 1
                #in_file = open(file_name, 'r')
                #landmarks_list = in_file.readlines()
                #in_file.close()
                print(new_file_name)
            
            
if __name__ == '__main__': 
    # Calling main() function
    main()
    
    