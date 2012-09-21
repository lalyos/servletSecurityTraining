package com.acme.hooters;

import java.security.Principal;
import java.util.HashSet;
import java.util.Set;


public class User implements Principal {

    private String name;
    private String password;
    private Set<String> roles = new HashSet<String>();
    
    public User(String name, String password, String... roles) {
        this.name = name;
        this.password = password;
        for (String role : roles) {
            this.roles.add(role);
        }
    }
    
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public String getPassword() {
        return password;
    }
    public void setPassword(String password) {
        this.password = password;
    }
    public Set<String> getRoles() {
        return roles;
    }
    public void setRoles(Set<String> roles) {
        this.roles = roles;
    }
    
}
