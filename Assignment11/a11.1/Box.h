// CH-230-A
// a11_p1.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

// CH-230-A
// a11_p1.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

class Box {
    private:
        double height;
        double width;
        double depth;

    public:
        //Empty constructor with no parameters
        Box();

        //Constructor with all parameters
        Box(double Height, double Width, double Depth);

        //Copy constructor
        Box(Box &box);

        //Destructor
        ~Box();

        //Setter methods
        void setHeight(double Height);
        void setWidth(double Width);
        void setDepth(double Depth);

        //Getter methods
        double getHeight();
        double getWidth();
        double getDepth();
};