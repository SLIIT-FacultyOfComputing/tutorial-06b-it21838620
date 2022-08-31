class Box {
    private:
       int length;
       int width;
       int height;
    public:
      void setDetails(int pwidth , int pheight , int pLength);
      int getHeight();
      int getLength();
      int getWidth();
      int calcVolume();
};
