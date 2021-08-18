class Box {
    private:
       int length;
       int width;
       int height;
    public:
       //setters
       void setLength(int l);
       void setWidth(int w);
       void setHeight(int h);
       //getters
       int getLength();
       int getWidth();
       int getHeight();
       
       int calcVolume();
};
