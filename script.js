// ===============================
// EDIT YOUR PORTFOLIO HERE
// ===============================

const projects = [
  {
    number: "01",
    title: "SmartCare Hospital",
    description: "An AI-powered healthcare concept focused on faster decisions, connected records, and preventive care.",
    link: "#"
  },
  {
    number: "02",
    title: "Your Project",
    description: "Replace this card with one of your coding projects. Add a short explanation and a GitHub link.",
    link: "https://github.com/"
  },
  {
    number: "03",
    title: "Your Next Build",
    description: "A placeholder for the next project you create during your B.Tech journey.",
    link: "#"
  }
];

const certificates = [
  {
    title: "Your Certificate",
    issuer: "Issuing Organization",
    date: "2026",
    image: "assets/certificates/certificate-1.jpg",
    link: "#"
  },
  {
    title: "Add Another Certificate",
    issuer: "Organization",
    date: "2026",
    image: "assets/certificates/certificate-2.jpg",
    link: "#"
  }
];

// ===============================
// DO NOT NEED TO EDIT BELOW
// ===============================

const projectList = document.getElementById("project-list");
projectList.innerHTML = projects.map(project => `
  <article class="project-card reveal">
    <div>
      <span class="project-number">${project.number}</span>
      <h3>${project.title}</h3>
      <p>${project.description}</p>
    </div>
    <a class="card-link" href="${project.link}" target="_blank" rel="noopener">View project ↗</a>
  </article>
`).join("");

const certificateList = document.getElementById("certificate-list");
certificateList.innerHTML = certificates.map(cert => `
  <article class="certificate-card reveal">
    <div class="certificate-image">
      <img src="${cert.image}" alt="${cert.title}" onerror="this.style.display='none'; this.nextElementSibling.style.display='block';">
      <span class="certificate-placeholder" style="display:none;">ADD CERTIFICATE IMAGE</span>
    </div>
    <div class="certificate-info">
      <h3>${cert.title}</h3>
      <p>${cert.issuer} • ${cert.date}</p>
      <a class="card-link" href="${cert.link}" target="_blank" rel="noopener">View certificate ↗</a>
    </div>
  </article>
`).join("");

const menuBtn = document.querySelector(".menu-btn");
const navLinks = document.querySelector(".nav-links");
menuBtn.addEventListener("click", () => navLinks.classList.toggle("open"));

document.querySelectorAll(".nav-links a").forEach(link => {
  link.addEventListener("click", () => navLinks.classList.remove("open"));
});

const observer = new IntersectionObserver(entries => {
  entries.forEach(entry => {
    if (entry.isIntersecting) {
      entry.target.classList.add("visible");
      observer.unobserve(entry.target);
    }
  });
}, { threshold: 0.12 });

document.querySelectorAll(".reveal").forEach(el => observer.observe(el));
