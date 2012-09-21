<%@page import="java.util.Map"%>
<%@page import="com.acme.hooters.User"%>
<%
String username = request.getParameter("username");
String password = request.getParameter("password");
String redirectUrl = request.getParameter("redirectUrl");

Map<String, User> users = (Map<String, User>) application.getAttribute("users");
User user = users.get(username);
if (user != null && user.getPassword().equals(password)) {
      System.out.println("USERNAME & PWD OK !!!");
        session.setAttribute("username", username);
        response.sendRedirect(application.getContextPath() + redirectUrl);
} else {
    System.out.println("USERNAME & PWD ________NOT________ OK !!!");

    response.sendError(403); 
}

%>