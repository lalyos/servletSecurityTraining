<%@taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c"%>

<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>


<div id="myCarousel" class="carousel slide span4" style="float: left">
	<!-- Carousel items -->
	<div class="carousel-inner">
		<c:forEach var="girl" items="${girls}" varStatus="counter">
			<div class="item ${counter.count == 1 ? 'active' : ''}">
				<img src="${girl.value.imageUrl}" style="height: 400px">
				<div class="carousel-caption">
					<table class="table table-condensed table-bordered span1"
						style="background: white">
						<thead>
							<tr>
								<th>name</th>
								<th>breast</th>
								<th>basket</th>
							</tr>
						</thead>
						<tbody>
							<tr>
								<td>${girl.value.name}</td>
								<td>${girl.value.breastSize}</td>
								<td>${girl.value.basket}</td>
							</tr>
						</tbody>
					</table>
				</div>
			</div>
		</c:forEach>
	</div>
	<!-- Carousel nav -->
	<a class="carousel-control left " href="#myCarousel" data-slide="prev">&lsaquo;</a>
	<a class="carousel-control right " href="#myCarousel" data-slide="next">&rsaquo;</a>
</div>

