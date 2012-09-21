package com.acme.hooters;

import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

import javax.servlet.ServletContextEvent;
import javax.servlet.ServletContextListener;

/**
 * Application Lifecycle Listener implementation class StartupListener
 *
 */
public class StartupListener implements ServletContextListener {

    /**
     * Default constructor. 
     */
    public StartupListener() {
        // TODO Auto-generated constructor stub
    }

	/**
     * @see ServletContextListener#contextInitialized(ServletContextEvent)
     */
    public void contextInitialized(ServletContextEvent event) {
        Map<String, Girl> girls = new ConcurrentHashMap<String, Girl>();
        addGirl(girls, "Suzy", 95, "A");
        addGirl(girls, "Lucy", 105, "c");
        addGirl(girls, "Jolan", 85, "DD");
        addGirl(girls, "Zsuzsi", 65, "B");
        
        event.getServletContext().setAttribute("girls", girls);
    }

    private void addGirl(Map<String, Girl> girls, String name, int breast, String basket) {
        Girl g = new Girl(name, breast, basket);
        girls.put(g.getName(), g);
        
    }


	/**
     * @see ServletContextListener#contextDestroyed(ServletContextEvent)
     */
    public void contextDestroyed(ServletContextEvent arg0) {
        // TODO Auto-generated method stub
    }
	
}
