package com.acme.hooters;

import java.util.Random;

public class Girl {
    private String name;
    private int breastSize;
    private String basket;
    private String imageUrl;
    
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public int getBreastSize() {
        return breastSize;
    }
    public void setBreastSize(int breastSize) {
        this.breastSize = breastSize;
    }
    public String getBasket() {
        return basket;
    }
    public void setBasket(String basket) {
        this.basket = basket;
    }
    
    private static Random rnd = new Random();

    public Girl() {
        this.imageUrl = imageUrls[rnd.nextInt(imageUrls.length)]; 
    }
    public Girl(String name, int breastSize, String basket) {
        this();
        this.name = name;
        this.breastSize = breastSize;
        this.basket = basket;
    }
    
    private static String[] imageUrls = {"http://images.sodahead.com/polls/001850297/hooters-girl-46990651739_xlarge.jpeg"
        ,"http://a0.twimg.com/profile_images/60067797/hooters_girl_-_twitter.gif"
        ,"http://salon.glenrose.net/images/OG%20hooters_girl.jpg"
        ,"http://blogs.houstonpress.com/hairballs/hooters100411.jpg"
        ,"http://www.nypost.com/rw/nypost/2010/02/10/news/photos_stories/cropped/hooters--300x450.jpg"
            };
    @Override
    public String toString() {
        return "Girl [name=" + name + ", breastSize=" + breastSize + ", basket=" + basket + "]";
    }
    public String getImageUrl() {
        return imageUrl;
    }
    

}
