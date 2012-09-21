package com.acme.hooters;

import java.io.IOException;
import java.security.Principal;
import java.util.Map;

import javax.servlet.Filter;
import javax.servlet.FilterChain;
import javax.servlet.FilterConfig;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletRequestWrapper;
import javax.servlet.http.HttpSession;

/**
 * Servlet Filter implementation class LoginFilter
 */
public class LoginFilter implements Filter {

    /**
     * Default constructor. 
     */
    public LoginFilter() {
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see Filter#destroy()
	 */
	public void destroy() {
		// TODO Auto-generated method stub
	}

	/**
	 * @see Filter#doFilter(ServletRequest, ServletResponse, FilterChain)
	 */
	public void doFilter(ServletRequest request, ServletResponse response, FilterChain chain) throws IOException, ServletException {
	    HttpServletRequest httpRequest = (HttpServletRequest) request;
	    HttpSession session = httpRequest.getSession();
	    Map<String, User> users = (Map<String, User>) session.getServletContext().getAttribute("users");
	    
	    String username = (String) session.getAttribute("username");
	    if (username == null) {
	        username = "";
	    }
	    
	    System.out.println("\n###\n###\n### username in session:" + username);
	    final User user = users.get(username);
	    
        HttpServletRequestWrapper loggedInRequest = new HttpServletRequestWrapper(httpRequest) {
            @Override
            public Principal getUserPrincipal() {
                System.out.println("faking username: " + (user == null ? "" : user.getName()));
                return user;
            }
            
            @Override
            public boolean isUserInRole(String role) {
                if (user != null) {
                    return user.getRoles().contains(role);
                }
                return false;
            }
        };
	    chain.doFilter(loggedInRequest, response);
	}

	/**
	 * @see Filter#init(FilterConfig)
	 */
	public void init(FilterConfig fConfig) throws ServletException {
		// TODO Auto-generated method stub
	}
}
