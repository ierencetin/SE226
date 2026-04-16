import geometry_utils

def main(operations_dict):
    print("Available shapes: circle, rectangle, triangle")
    print("Available calculations: _area, _perimeter")

    operation = input("Enter the operation you want to perform : ")
    operation_dict = {
        "circle_area" : geometry_utils.circle_area,
        "circle_perimeter" : geometry_utils.circle_perimeter,
        "rectangle_area" : geometry_utils.rectangle_area,
        "rectangle_perimeter" : geometry_utils.rectangle_perimeter,
        "triangle_area" : geometry_utils.triangle_area
    }
    if operation not in operations_dict:
        print("Error : Unknown operation selected.")
        return
    try:
        if "circle" in operation:
            radius = float(input("Enter radius :"))
            result = operation_dict[operation](radius)
        elif "rectangle" in operation :
            width = float(input("Enter width : "))
            height = float(input("Enter height : "))
            func = operation_dict[operation]
            result = func(width, height)
    except ValueError as e:
        if "could not convert" in str(e):
            print("Error : Enter a Value Number.")
